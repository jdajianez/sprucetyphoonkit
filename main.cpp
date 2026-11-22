#include <string>
#include <vector>

void digit_sum() {
    int n = 9081;
    int total = 0;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    (void)total;
}

void parity_count() {
    int evens = 0, odds = 0;
    for (int i = 1; i <= 20; ++i) {
        if (i % 2 == 0) evens += 1; else odds += 1;
    }
    (void)evens;
    (void)odds;
}

void char_frequency() {
    std::string text = "banana";
    int count = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == 'a') count += 1;
    }
    (void)count;
}

void vector_reverse() {
    std::vector<int> values;
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    std::vector<int> rev;
    for (std::size_t i = values.size(); i > 0; --i) rev.push_back(values[i - 1]);
    (void)rev;
}

extern "C" int prime_cove();
extern "C" void silver_harbor();
extern "C" void bright_bridge();
extern "C" void radiant_grove();

int main() {
    digit_sum();
    parity_count();
    char_frequency();
    vector_reverse();
    silver_harbor();
    bright_bridge();
    radiant_grove();
    return prime_cove();
}
