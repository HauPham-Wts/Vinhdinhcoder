/*
Khi tổ chức Vĩnh Định Contest 01 ban tổ chức tính đến khả năng giải được bài của các thí sinh để tính đến khả năng thành công của hội thi. Để các thí sinh tham dự đều có khả năng giải được ít nhất một bài thì BTC muốn tính độ khó của các bài tập theo một mức độ phù hợp dựa trên khả năng giải bài của các thí sinh. BTC dựa trên danh sách đăng ký, đã phân ra mỗi thí sinh tham dự có thể rơi vào 3 khả năng:

               - Loại 1: giải được ít nhất một bài: đánh giá là 500 điểm.

               - Loại 2: giải được ít nhất 3 bài: đánh giá là 1000 điểm.

               - Loại 3: giải được toàn bộ bài: đánh giá là 1500 điểm.

          BTC dự đoán rằng trong số các thí sinh tham dự thì có a thí sinh rơi vào loại 1, b thí sinh thuộc loại 2 và c thí sinh thuộc vào loại 3. Khi đó mức độ thành công sẽ được tính là tổng điểm đánh giá của tất cả thí sinh tham dự.

          Bạn hãy giúp cho ban tổ chức tính mức độ thành công này, từ đó BTC dựa vào đó để ra mức đề phù hợp.

Dữ liệu nhập: a, b, c theo thứ tự được nhập vào từ bàn phím

Kết quả: in ra màn hình một số nguyên duy nhất là tổng độ thành công.

Ràng buộc: a, b, c là số nguyên dương bé hơn 100.
*/
#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * 500 + b * 1000 + c * 1500;
}