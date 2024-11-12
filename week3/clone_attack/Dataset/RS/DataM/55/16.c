int main () {
    char veitL3Nwfu [200];
    char num2 [200];
    int nabqo2TeGk;
    int SwYyod;
    int b;
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
    nabqo2TeGk = (292 - 292);
    cin >> SwYyod >> veitL3Nwfu >> b;
    {
        int kuvgk9ih = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (veitL3Nwfu) > kuvgk9ih) {
            if ((int) 'A' <= veitL3Nwfu[kuvgk9ih] && (int) 'Z' >= veitL3Nwfu[kuvgk9ih])
                veitL3Nwfu[kuvgk9ih] += 32;
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
            kuvgk9ih = kuvgk9ih + 1;
        };
    }
    {
        int kuvgk9ih = 0;
        while (strlen (veitL3Nwfu) > kuvgk9ih) {
            if ((int) 'a' <= veitL3Nwfu[kuvgk9ih] && (int) 'z' >= veitL3Nwfu[kuvgk9ih])
                nabqo2TeGk = nabqo2TeGk + ((int) veitL3Nwfu[kuvgk9ih] - 87) * pow ((double ) SwYyod, (double ) (strlen (veitL3Nwfu) - 1 - kuvgk9ih));
            else {
                if ((int) '1' <= veitL3Nwfu[kuvgk9ih] && veitL3Nwfu[kuvgk9ih] <= (int) '9')
                    nabqo2TeGk = nabqo2TeGk + ((int) veitL3Nwfu[kuvgk9ih] - (582 - 534)) * pow ((double ) SwYyod, (double ) (strlen (veitL3Nwfu) - 1 - kuvgk9ih));
            }
            kuvgk9ih++;
        };
    }
    if (nabqo2TeGk == 0)
        cout << nabqo2TeGk << endl;
    else {
        int j = 0;
        for (;;) {
            if (nabqo2TeGk == 0)
                break;
            if (nabqo2TeGk % b < (518 - 508))
                num2[j] = (char) (nabqo2TeGk % b + 48);
            else
                num2[j] = (char) (nabqo2TeGk % b + 55);
            j++;
            nabqo2TeGk = nabqo2TeGk / b;
        }
        {
            int kuvgk9ih = j - 1;
            while (kuvgk9ih >= 0) {
                cout << num2[kuvgk9ih];
                kuvgk9ih = kuvgk9ih - 1;
            };
        }
        cout << endl;
    }
    return 0;
}

