#include "../lib/print.h"

void task1() {
    std::cout << "====================================== task1 ======================================" << std::endl;
    short int m = 201;
    short int n = -59;

    // Расширение знаковым способом
    int extended_signed_m = static_cast<int>(m);
    int extended_signed_n = static_cast<int>(n);

    // Расширение беззнаковым способом
    unsigned int extended_unsigned_m = static_cast<unsigned int>(m);
    unsigned int extended_unsigned_n = static_cast<unsigned int>(n);

    std::cout << "m:" << std::endl;
    print16(&m);
    print32(&extended_signed_m);
    print32(&extended_unsigned_m);

    std::cout << "n:" << std::endl;
    print16(&n);
    print32(&extended_signed_n);
    print32(&extended_unsigned_n);
    std::cout << "===================================================================================" << std::endl << std::endl;
}

void task2(const short int* x) {
    std::cout << "====================================== task2 ======================================" << std::endl;

    // Копии переменных для каждой операции
    short x_signed_mul_2 = *x;
    unsigned short x_unsigned_mul_2 = *x;
    short x_signed_div_2 = *x;
    unsigned short x_unsigned_div_2 = *x;
    unsigned short x_unsigned_mod_16 = *x;
    unsigned short x_unsigned_round_down_16 = *x;
    short x_signed_left_shift = *x;
    unsigned short x_unsigned_left_shift = *x;
    short x_signed_right_shift = *x;
    unsigned short x_unsigned_right_shift = *x;
    unsigned short x_and_15 = *x;
    short x_and_neg_16 = *x;

    // Знаковое умножение на 2
    x_signed_mul_2 *= 2;

    // Беззнаковое умножение на 2
    x_unsigned_mul_2 *= 2;

    // Знаковое деление на 2
    x_signed_div_2 /= 2;

    // Беззнаковое деление на 2
    x_unsigned_div_2 /= 2;

    // Расчёт остатка от беззнакового деления на 16
    x_unsigned_mod_16 %= 16;

    // Округление вниз до числа, кратного 16 (беззнаковое)
    x_unsigned_round_down_16 &= ~15;

    // Знаковый сдвиг влево на 1 бит
    x_signed_left_shift <<= 1;

    // Беззнаковый сдвиг влево на 1 бит
    x_unsigned_left_shift <<= 1;

    // Знаковый сдвиг вправо на 1 бит
    x_signed_right_shift >>= 1;

    // Беззнаковый сдвиг вправо на 1 бит
    x_unsigned_right_shift >>= 1;

    // Рассчитывает x & 15
    x_and_15 &= 15;

    // Рассчитывает x & -16
    x_and_neg_16 &= -16;

    // Вывод результатов
    std::cout << "Значение переменной x = " << *x << " после каждой операции:" << std::endl;
    std::cout << "Знаковое умножение на 2: " << x_signed_mul_2 << std::endl;
    std::cout << "Беззнаковое умножение на 2: " << x_unsigned_mul_2 << std::endl;
    std::cout << "Знаковое деление на 2: " << x_signed_div_2 << std::endl;
    std::cout << "Беззнаковое деление на 2: " << x_unsigned_div_2 << std::endl;
    std::cout << "Остаток от деления на 16: " << x_unsigned_mod_16 << std::endl;
    std::cout << "Округление вниз до числа, кратного 16: " << x_unsigned_round_down_16 << std::endl;
    std::cout << "Знаковый сдвиг влево на 1 бит: " << x_signed_left_shift << std::endl;
    std::cout << "Беззнаковый сдвиг влево на 1 бит: " << x_unsigned_left_shift << std::endl;
    std::cout << "Знаковый сдвиг вправо на 1 бит: " << x_signed_right_shift << std::endl;
    std::cout << "Беззнаковый сдвиг вправо на 1 бит: " << x_unsigned_right_shift << std::endl;
    std::cout << "Результат операции x & 15: " << x_and_15 << std::endl;
    std::cout << "Результат операции x & -16: " << x_and_neg_16 << std::endl;

    std::cout << "===================================================================================" << std::endl << std::endl;
}

enum class Mode {
    UP,
    DOWN
};

unsigned int task3(Mode mode, unsigned int x, unsigned int D) {
    if(mode == Mode::UP) {
        return (x + (D - 1)) & ~(D - 1);
    } 

    return x & ~(D - 1);
}

float task5(const float* x) {
    float x_copy = static_cast<float>(*x);
    int* p = reinterpret_cast<int*>(&x_copy);

    *p &= 0x7FFFFFFF;

    return x_copy;
}

enum class Direction {
    FORWARD,
    REVERSE
};

float task6_float(int n, Direction direction) {
    float result = 0;
    if(direction == Direction::FORWARD) {
        std::cout << "Float forward ";
        for(int i = 1; i <= n; i++) {
            result += (float)1.0 / i;
        }
    } else {
        std::cout << "Float reverse ";
        for (int i = n; i >= 1; i--) {
            result += (float)1.0 / i;
        }
    }

    std::cout << "n: " << n << std::endl;
    std::cout << std::fixed  << std::setprecision(6) << result << std::endl;

    return result;
}

double task6_double(int n, Direction direction) {
    double result = 0;
    if(direction == Direction::FORWARD) {
        std::cout << "Double forward ";
        for(int i = 1; i <= n; i++) {
            result += (double)1.0 / i;
        }
    } else {
        std::cout << "Double reverse ";
        for (int i = n; i >= 1; i--) {
            result += (double)1.0 / i;
        }
    }

    std::cout << "n: " << n << std::endl;
    std::cout << std::fixed << std::setprecision(6) << result << std::endl;

    return result;
}

int main() {
    task1();

    const short int m = 201;
    const short int n = -59;
    task2(&m);
    task2(&n);

    const unsigned int x = 257;
    const unsigned int D = 128;

    std::cout << "====================================== task3 ======================================" << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "D: " << D << std::endl;
    std::cout << "Up: " << task3(Mode::UP, x, D) << std::endl;
    std::cout << "Down: " << task3(Mode::DOWN, x, D) << std::endl;
    std::cout << "===================================================================================" << std::endl << std::endl;

    std::cout << "====================================== task5 ======================================" << std::endl;
    const float float_number = -12.34;
    std::cout << "Float number: " << std::fixed << float_number << std::endl;
    std::cout << std::setprecision(6) << task5(&float_number) << std::endl;
    std::cout << "===================================================================================" << std::endl << std::endl;


    std::cout << "====================================== task6 ======================================" << std::endl;
    float float1000Forward = task6_float(1000, Direction::FORWARD);
    print32(&float1000Forward);

    float float1000Reverse = task6_float(1000, Direction::REVERSE);
    print32(&float1000Reverse);

    float float1000000Forward = task6_float(1000000, Direction::FORWARD);
    print32(&float1000000Forward);

    float float1000000Reverse = task6_float(1000000, Direction::REVERSE);
    print32(&float1000000Reverse);

    float float1000000000Forward = task6_float(1000000000, Direction::FORWARD);
    print32(&float1000000000Forward);

    float float1000000000Reverse = task6_float(1000000000, Direction::REVERSE);
    print32(&float1000000000Reverse);

    double double1000Forward = task6_double(1000, Direction::FORWARD);
    print64(&double1000Forward);

    double double1000Reverse = task6_double(1000, Direction::REVERSE);
    print64(&double1000Reverse);

    double double1000000Forward = task6_double(1000000, Direction::FORWARD);
    print64(&double1000000Forward);

    double double1000000Reverse = task6_double(1000000, Direction::REVERSE);
    print64(&double1000000Reverse);

    double double1000000000Forward = task6_double(1000000000, Direction::FORWARD);
    print64(&double1000000000Forward);

    double double1000000000Reverse = task6_double(1000000000, Direction::REVERSE);
    print64(&double1000000000Reverse);
    std::cout << "===================================================================================" << std::endl << std::endl;

    return 0;
}
