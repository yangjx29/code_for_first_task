int main () {
    int yfbvDueo2;
    int hysqg5zF9Hf;
    int t;
    int RMcahsNAo6gj [yfbvDueo2];
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
    cin >> yfbvDueo2 >> hysqg5zF9Hf;
    for (int wYyN1KosEcb = (998 - 998);
    wYyN1KosEcb < yfbvDueo2; wYyN1KosEcb = wYyN1KosEcb + 1) {
        cin >> RMcahsNAo6gj[wYyN1KosEcb];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (int w3wfPVNES = yfbvDueo2 - hysqg5zF9Hf;
    w3wfPVNES < yfbvDueo2; w3wfPVNES++) {
        t = RMcahsNAo6gj[w3wfPVNES];
        {
            int l = w3wfPVNES;
            while (l > w3wfPVNES + hysqg5zF9Hf - yfbvDueo2) {
                RMcahsNAo6gj[l] = RMcahsNAo6gj[l - 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                l -= 1;
            };
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
        RMcahsNAo6gj[w3wfPVNES - yfbvDueo2 + hysqg5zF9Hf] = t;
    }
    for (int obeA3oc = 0;
    obeA3oc < yfbvDueo2 - 1; obeA3oc = obeA3oc + 1) {
        cout << RMcahsNAo6gj[obeA3oc] << " ";
    }
    cout << RMcahsNAo6gj[yfbvDueo2 - 1];
}

