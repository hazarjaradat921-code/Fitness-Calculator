#include <iostream>
using namespace std;

class FitnessCalculator {
private:
    double weight; // بالـ kg

public:
    FitnessCalculator(double w) : weight(w) {}

    // دالة لحساب الكالوريز المحروقة عند المشي
    double calculateWalkingCalories(double distance) {
        return distance * 0.5 * weight; // معادلة افتراضية بسيطة
    }
};

int main() {
    FitnessCalculator user1(60.0); // وزن المستخدم 60 كيلو
    cout << "Calories burned: " << user1.calculateWalkingCalories(5.0) << endl;
    return 0;
}
