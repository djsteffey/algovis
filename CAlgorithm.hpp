#ifndef algovis_CAlgorithm_hpp
#define algovis_CAlgorithm_hpp

#include <SFML/Graphics.hpp>
#include <thread>

namespace algovis{
    class CAlgorithm{
        public:
            CAlgorithm();
            virtual ~CAlgorithm();
            void draw(sf::RenderWindow& rw, sf::Vector2f offset);

        protected:
            virtual void thread_function() = 0;

            int* m_array;
            bool m_ready_next_step;
            std::thread m_thread;
            bool m_complete;

        private:
    };
}
#endif