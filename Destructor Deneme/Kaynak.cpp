#include <iostream>

class Entity {

 public:
	float X, Y;
	Entity()
	{
		X = 0.0f;
		Y = 5.0f;
		std::cout << "Created Entity" << std::endl;
	}
	Entity(float x, float y)
	{
		X = x;
		Y = y;
    }
	~Entity()
	{
		std::cout << "Destroyed Entity" << std::endl;
	}

	void Print()
	{
		std::cout << X << "," << Y << std::endl;

	}
};
int main() {
	Entity e;
	e.Print();

}