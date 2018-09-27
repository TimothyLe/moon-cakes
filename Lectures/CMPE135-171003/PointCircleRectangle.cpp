class Point
{
public:
    Point(int x, int y) : x(x), y(y) {}
    virtual ~Point() {}

    int get_x() const { return x; }
    int get_y() const { return y; }

    void move(int dx, int dy) { x += dx; y += dy; }

private:
    int x, y;
};

class Circle : public Point
{
public:
    Circle(Point center, int radius)
        : Point(center.get_x(), center.get_y()),
          radius(radius)
    {}

private:
    int radius;
};

class Rectangle : public Point
{
public:
    Rectangle(Point upper_left, Point lower_right)
        : Point(upper_left.get_x(), upper_left.get_y()),
          lower_right(lower_right)
    {}

    void move(int dx, int dy)  // override Point::move()
    {
        Point::move(dx, dy);
        lower_right.move(dx, dy);
    }

private:
    Point lower_right;
};

int main()
{
    return 0;
}
