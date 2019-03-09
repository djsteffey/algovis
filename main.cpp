#include <SFML/Graphics.hpp>
#include "CAlgorithm.hpp"
#include "CAlgorithmBubbleSort.hpp"
#include "CAlgorithmSelectionSort.hpp"
#include "CAlgorithmInsertionSort.hpp"
#include "CAlgorithmQuickSort.hpp"

int main(int argc, char* argv[]){
    sf::RenderWindow rw;
    rw.create(sf::VideoMode(1280, 600, 32), "Title", sf::Style::Titlebar | sf::Style::Close);

    algovis::CAlgorithm* algos[4];
    algos[0] = new algovis::CAlgorithmBubbleSort();
    algos[1] = new algovis::CAlgorithmSelectionSort();
    algos[2] = new algovis::CAlgorithmInsertionSort();
    algos[3] = new algovis::CAlgorithmQuickSort();

    while (rw.isOpen()){
        sf::Event event;
        while (rw.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                rw.close();
            }
        }

        rw.clear();
        algos[0]->draw(rw, sf::Vector2f(0, 0));
        algos[1]->draw(rw, sf::Vector2f(650, 0));
        algos[2]->draw(rw, sf::Vector2f(0, 300));
        algos[3]->draw(rw, sf::Vector2f(650, 300));
        rw.display();
    }
}