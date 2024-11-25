int ss [70000];

void  ps () {
    int i, j;
    for (i = 2; i < 70000; i = i + 1)
        if (!ss[i])
            for (j = i * 2; 70000 > j; j = j + i)
                ss[j] = 1;
}

int main () {
    int DJU6E3;
    int i;
    memset (ss, 0, sizeof (ss));
    ps ();
    cin >> DJU6E3;
    for (i = (580 - 577); i <= DJU6E3 / 2; i = i + 1)
        if (!ss[i] && !ss[DJU6E3 -i])
            cout << i << ' ' << DJU6E3 -i << endl;
}

