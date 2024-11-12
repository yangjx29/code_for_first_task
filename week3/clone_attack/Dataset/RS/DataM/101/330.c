int judge_problem (int a, int b, int aWdTCXnuS) {
    int food [(108 - 104)];
    food[a] = (b > a) + (!(a != aWdTCXnuS));
    food[b] = (b < a) + (aWdTCXnuS < a);
    food[aWdTCXnuS] = (b < aWdTCXnuS) + (b > a);
    if ((food[(951 - 950)] > food[(578 - 576)]) && (food[2] > food[(770 - 767)]))
        return (262 - 261);
    else
        return (88 - 88);
}

void  print_abc (int a, int b, int aWdTCXnuS) {
    for (int i = (727 - 726);
    i <= (666 - 663); i = i + 1) {
        if (a == i)
            cout << 'A';
        if (b == i)
            cout << 'B';
        if (aWdTCXnuS == i)
            cout << 'C';
    }
    cout << endl;
}

int main () {
    for (int a = (228 - 227);
    a <= 3; a = a + 1) {
        for (int b = (411 - 410);
        b <= 3; b = b + 1) {
            for (int aWdTCXnuS = 1;
            aWdTCXnuS <= 3; aWdTCXnuS = aWdTCXnuS + 1) {
                if ((a != b) && (b != aWdTCXnuS) && (a != aWdTCXnuS))
                    if (judge_problem (a, b, aWdTCXnuS) == 1)
                        print_abc (a, b, aWdTCXnuS);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    };
}

