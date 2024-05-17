#include <iostream>
#include <vector>
#include <algorithm>

int Maxtoys(std::vector<int>& prices, int K) {
    std::sort(prices.begin(), prices.end()); // Sắp xếp mảng giá đồ chơi theo thứ tự tăng dần
    
    int count = 0;//đếm số lượng đồ chơi đã mua
    int total_price = 0;//lưu tổng giá đồ chơi đã mua
    
    for (int price : prices) {
        if (total_price + price <= K) {
            count++;
            total_price += price;
        } else {
            break;
        }
    }
    
    return count;
}

int main() {
    int K;
    std::cout << "Nhap so tien co the mua do choi (K): ";
    std::cin >> K;
    
    int n;
    std::cout << "Nhap so luong do choi: ";
    std::cin >> n;
    
    std::vector<int> prices(n);
    std::cout << "Nhap gia cua tung do choi:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> prices[i];
    }
    
    int Maxtoyscount = Maxtoys(prices, K);
    std::cout << "So luong do choi toi da co the mua duoc la: " << Maxtoyscount << std::endl;
    
    return 0;
}