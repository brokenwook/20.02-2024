
#include <iostream>

struct Rifle
{
    int reload()
    {
        char choose;
        std::cout << "Какими патронами хотите зарядить автомат:\n1-Трассер\n2-Пули со стальным наконечником\nq-Выход\n";
        std::cin >> choose;
        if (choose == '1')
        {
            std::cout << "Вы зарядили автомат трассерами\nВыстрел.\nМагазин пустой\n";
        }
        else if (choose == '2')
        {
            std::cout << "Вы зарядили автомат пулями со стальным наконечником\nВыстрел\nМагазин пустой\n";
        }
        else if (choose == 'q')
        {
            return 0;
        }
        else
        {
            std::cout << "Error 404";
            return 0;
        }
    }
};

struct Shotgun
{

    int reload()
    {
        char choose;
        std::cout << "Какими патронами хотите зарядить дробовик:\n1-Мелкая дробь\n2-Крупная дробь\nq-Выход\n";
        std::cin >> choose;
        if (choose == '1')
        {
            std::cout << "Вы зарядили дробовик мелкой добью\nВыстрел\nМагазин пустой\n";
        }
        else if (choose == '2')
        {
            std::cout << "Вы зарядили дробовик крупной дробью\nВыстрел\nМагазин пустой\n";
        }
        else if (choose == 'q')
        {
            return 0;
        }
        else
        {
            std::cout << "Error 404";
            return 0;
        }
    }

};

struct Person
{
    Shotgun shotgun;
    Rifle rifle;
    void gun()
    {
        while (true)
        {
            char choose;
            std::cout << "Выберите оружие\n1-Дробовик\n2-Автомат\nq-Выход\n";
            std::cin >> choose;
            if (choose == '1')
            {
                shotgun.reload();
            }
            else if (choose == '2')
            {
                rifle.reload();
            }
            else if (choose == 'q')
            {
                break;
            }
            else
            {
                std::cout << "Error 404";
                break;
            }
        }
    }

    void health()
    {
        std::cout << "Вы вылечили себя.\n";
    }
};

void start()
{
    Person person;
    char choose;
    while (true)
    {
        std::cout << "Выберите\n1-оружие\n2-лечение\nq-выход\n";
        std::cin >> choose;
        if (choose == '1')
        {
            person.gun();

        }
        else if (choose == '2')
        {
            person.health();

        }
        else if (choose == 'q')
        {
            break;
        }
        else
        {
            std::cout << "Error 404";
            break;
        }
    }
}

int main()
{
    setlocale(0, "");
    start();
}
