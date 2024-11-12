char CHR [(893 - 773)];
int ZUjMbN, p2, p3, num;

int n8oFEtjWL (char Q) {
    if (('0' <= Q) && ('9' >= Q))
        return Q -'0';
    if ((Q >= 'A') && (Q <= 'Z'))
        return Q -'A' + (74 - 64);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return -(413 - 412);
}

char JjvcieToV (int Q) {
    if ((Q >= (984 - 984)) && (Q <= (288 - 279)))
        return '0' + Q;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (Q > 9)
        return 'A' + Q -10;
}

void  output (int ans) {
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
    if (ans == 0)
        return;
    else {
        output (ans / p3);
        cout << JjvcieToV (ans % p3);
    };
}

int main () {
    cin >> ZUjMbN;
    cin.get ();
    p2 = 0;
    num = 0;
    for (; (CHR[p2] = cin.get ()) != ' ';) {
        if ((CHR[p2] >= 'a') && (CHR[p2] <= 'z'))
            CHR[p2] = CHR[p2] - 'a' + 'A';
        num = num * ZUjMbN +n8oFEtjWL (CHR[p2]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        p2++;
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> p3;
    if (num == 0)
        cout << 0;
    else
        output (num);
    cout << endl;
    return 0;
}

