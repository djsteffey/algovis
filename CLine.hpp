#ifndef algovis_CLine_hpp
#define algovis_CLine_hpp

#include <SFML/Graphics.hpp>

namespace algovis{
    class CLine{
        public:
            CLine();
            CLine(sf::Vector2f p0, sf::Vector2f p1);
            ~CLine();

            void draw(sf::RenderWindow& rw);
            void set_thickness(float thickness);
            void set_color(sf::Color color);
            void set_end_points(sf::Vector2f p0, sf::Vector2f p1);

        protected:

        private:
            void update();

            bool m_dirty;
            float m_thickness;
            sf::Vector2f m_points[2];
            sf::RectangleShape m_rect_shape;
    };
}
#endif