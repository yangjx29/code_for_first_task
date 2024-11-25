int n, L73ViEZvIe;
int z4VoK53 [(683 - 583)], b [(782 - 682)];

void  scanf () {
    int i;
    cin >> n >> L73ViEZvIe;
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
    {
        i = 371 - 370;
        while (n >= i) {
            cin >> z4VoK53[i];
            i = i + 1;
        };
    }
    for (i = (466 - 465); L73ViEZvIe >= i; i = i + 1)
        cin >> b[i];
}

void  xAsXMpLo6z () {
    int i, j;
    for (i = (843 - 842); n > i; i = i + 1)
        for (j = i + 1; n >= j; j = j + 1)
            if (z4VoK53[j] < z4VoK53[i]) {
                z4VoK53[(677 - 677)] = z4VoK53[i];
                z4VoK53[i] = z4VoK53[j];
                z4VoK53[j] = z4VoK53[(45 - 45)];
            }
    for (i = 1; L73ViEZvIe > i; i = i + 1)
        for (j = i + 1; j <= L73ViEZvIe; j = j + 1)
            if (b[i] > b[j]) {
                b[(64 - 64)] = b[i];
                b[i] = b[j];
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
                b[j] = b[(655 - 655)];
            };
}

void  Zu2zqcIQX () {
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (i = n + 1; i <= n + L73ViEZvIe; i = i + 1)
        z4VoK53[i] = b[i - n];
}

void  pDR5WXr () {
    int i;
    cout << z4VoK53[1];
    for (i = (557 - 555); i <= n + L73ViEZvIe; i = i + 1)
        cout << ' ' << z4VoK53[i];
    cout << endl;
}

int main () {
    scanf ();
    xAsXMpLo6z ();
    Zu2zqcIQX ();
    pDR5WXr ();
}

