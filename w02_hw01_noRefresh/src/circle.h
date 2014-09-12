#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
    public:
        circle();

        void setup();
		void update();
		void draw();
        int sizeCircle;
        int circleAlpha;
        float radius;
        float speedX;
        float speedY;
        float posX;
        float posY;

    protected:
    private:
};

#endif // CIRCLE_H
