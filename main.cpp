#include <iostream>
using namespace std;

int main() {
  
  double fileSize, speed;
  cout << "Введите размер фильма в ГБ: ";
  cin >> fileSize;
  cout << "Введите скорость скачивания за секунду в Битах: ";
  cin >> speed;

  double fileSizeInBits = fileSize * 1024 * 1024 * 1024 * 8;
  double timeInSeconds = fileSizeInBits / speed;
  
  int hours = timeInSeconds / 3600;
  int minutes = (timeInSeconds - hours * 3600) / 60;
  int seconds = timeInSeconds - hours * 3600 - minutes * 60;
  
  cout << "Он загрузит его через " << hours << " Час(а) " << minutes << " Минут(ы) "
       << seconds << " Секунд(ы) " << endl;

  }
