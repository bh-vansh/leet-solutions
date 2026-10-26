int splitNum(int num){
    int count[10] = {0};

    while (num > 0) {
        count[num % 10]++;
        num /= 10;
    }

    int num1 = 0, num2 = 0;
    int turn = 0;

    for (int d = 0; d <= 9; d++) {
        while (count[d] > 0) {
            if (turn == 0)
                num1 = num1 * 10 + d;
            else
                num2 = num2 * 10 + d;

            turn = 1 - turn;
            count[d]--;
        }
    }

    return num1 + num2;
}
    
