#include "CAlgorithm.hpp"

namespace algovis{
    CAlgorithm::CAlgorithm(){
        // create the array and fill with random values
        this->m_array = new int[256];
        for (int i = 0; i < 256; ++i){
            this->m_array[i] = std::rand() % 256 + 1;
        }

        // other
        this->m_ready_next_step = false;
        this->m_complete = false;

        // start the thread
        this->m_thread = std::thread(&CAlgorithm::thread_function, this);
    }

    CAlgorithm::~CAlgorithm(){
        delete this->m_array;
    }

    void CAlgorithm::draw(sf::RenderWindow& rw, sf::Vector2f offset){
        for (int i = 0; i < 256; ++i){
            sf::RectangleShape rs(sf::Vector2f(2, this->m_array[i]));
            rs.setPosition(sf::Vector2f(i * 2 + offset.x, 256 - this->m_array[i] + offset.y));
            if (this->m_complete){
                rs.setFillColor(sf::Color::Green);
            }
            rw.draw(rs);
        }

        this->m_ready_next_step = true;
    }
}