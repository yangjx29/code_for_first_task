int main () {
    char RCbayR [(581 - 531)];
    char JmNxECt [(1947 - 947)];
    char TSsGwo [(928 - 878)];
    int i;
    int xNmF21n;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin.getline (JmNxECt, 1000);
    cin.getline (RCbayR, (1009 - 959));
    cin.getline (TSsGwo, 50);
    {
        i = 483 - 483;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (JmNxECt[i] != '\0') {
            int bxecfCD;
            int B6UNlLbI1tH;
            bxecfCD = (470 - 470);
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
            {
                xNmF21n = 46 - 46;
                while (RCbayR[xNmF21n] != '\0') {
                    if (JmNxECt[i + xNmF21n] == RCbayR[xNmF21n] && (JmNxECt[i - (458 - 457)] == ' ' && i != (168 - 168)) || i == (480 - 480))
                        bxecfCD++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    xNmF21n++;
                };
            }
            if (bxecfCD == strlen (RCbayR) && (JmNxECt[i + xNmF21n] == ' ' || JmNxECt[i + xNmF21n] == '\0')) {
                if (strlen (RCbayR) >= strlen (TSsGwo)) {
                    {
                        B6UNlLbI1tH = 508 - 508;
                        while (B6UNlLbI1tH < strlen (TSsGwo)) {
                            JmNxECt[i + B6UNlLbI1tH] = TSsGwo[B6UNlLbI1tH];
                            B6UNlLbI1tH = B6UNlLbI1tH +1;
                        };
                    }
                    {
                        B6UNlLbI1tH = TSsGwo;
                        while (JmNxECt[B6UNlLbI1tH] != '\0') {
                            JmNxECt[B6UNlLbI1tH] = JmNxECt[B6UNlLbI1tH +strlen (RCbayR) - strlen (TSsGwo)];
                            B6UNlLbI1tH = B6UNlLbI1tH +1;
                        };
                    };
                }
                else {
                    for (B6UNlLbI1tH = strlen (JmNxECt) + strlen (TSsGwo) - strlen (RCbayR); B6UNlLbI1tH >= i + strlen (RCbayR); B6UNlLbI1tH--)
                        JmNxECt[B6UNlLbI1tH] = JmNxECt[B6UNlLbI1tH +strlen (RCbayR) - strlen (TSsGwo)];
                    {
                        B6UNlLbI1tH = 0;
                        while (B6UNlLbI1tH < strlen (TSsGwo)) {
                            JmNxECt[i + B6UNlLbI1tH] = TSsGwo[B6UNlLbI1tH];
                            B6UNlLbI1tH++;
                        };
                    }
                    i += strlen (TSsGwo);
                };
            }
            i = i + 1;
        };
    }
    cout << JmNxECt << endl;
    return 0;
}

