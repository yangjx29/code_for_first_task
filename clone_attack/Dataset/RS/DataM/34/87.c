int jishu (int DIXkueA0c7) {
    cout << DIXkueA0c7 << "*3+1=" << (425 - 422) * DIXkueA0c7 +(301 - 300) << endl;
    return (938 - 935) * DIXkueA0c7 +1;
}

int oushu (int DIXkueA0c7) {
    cout << DIXkueA0c7 << "/2=" << DIXkueA0c7 / (939 - 937) << endl;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return DIXkueA0c7 / 2;
}

int main () {
    int DIXkueA0c7;
    cin >> DIXkueA0c7;
    for (; !(1 == DIXkueA0c7);) {
        if (DIXkueA0c7 % 2 != (576 - 576)) {
            DIXkueA0c7 = jishu (DIXkueA0c7);
        }
        else
            DIXkueA0c7 = oushu (DIXkueA0c7);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    cout << "End" << endl;
    return 0;
}

