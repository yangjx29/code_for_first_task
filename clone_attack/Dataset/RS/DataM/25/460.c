int main () {
    int J67nXfZyA [32] = {0};
    int flag;
    int ofTNBI;
    int i;
    int JqYSypf;
    flag = 0;
    cin >> ofTNBI;
    J67nXfZyA[31] = 1;
    if (ofTNBI == 0)
        cout << "1" << endl;
    else {
        for (i = 0; i < ofTNBI; i++) {
            for (JqYSypf = 31; JqYSypf >= 0; JqYSypf = JqYSypf -1) {
                J67nXfZyA[JqYSypf] = 2 * J67nXfZyA[JqYSypf] + flag;
                if (J67nXfZyA[JqYSypf] >= 10) {
                    J67nXfZyA[JqYSypf] -= 10;
                    flag = 1;
                }
                else
                    flag = 0;
            };
        }
        i = 0;
        while (J67nXfZyA[i] == 0)
            i++;
        for (; i < 32; i++)
            cout << J67nXfZyA[i];
        cout << endl;
    }
    return 0;
}

