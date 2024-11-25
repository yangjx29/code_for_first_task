int main () {
    int lgXYyi, i, a, j, jFJ3KA, MC8RHJo0;
    int qChZXnfm [lgXYyi];
    jFJ3KA = (828 - 828);
    cin >> lgXYyi;
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
    for (i = (184 - 184); i < lgXYyi; i = i + 1)
        cin >> qChZXnfm[i];
    for (i = 0, MC8RHJo0 = 0; i < lgXYyi; MC8RHJo0 = MC8RHJo0 +1, i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (qChZXnfm[MC8RHJo0] % 2 == 0) {
            for (j = MC8RHJo0; j < lgXYyi - jFJ3KA; j++)
                qChZXnfm[j] = qChZXnfm[j + 1];
            MC8RHJo0 = MC8RHJo0 -1;
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
            jFJ3KA++;
        };
    }
    for (j = 0; j < (lgXYyi - jFJ3KA); j++)
        for (i = 0; i < (lgXYyi - jFJ3KA - 1 - j); i++) {
            if (qChZXnfm[i] > qChZXnfm[i + 1]) {
                a = qChZXnfm[i];
                qChZXnfm[i] = qChZXnfm[i + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                qChZXnfm[i + 1] = a;
            };
        }
    {
        i = 0;
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
        while (i < (lgXYyi - jFJ3KA)) {
            if (i == (lgXYyi - jFJ3KA - 1))
                cout << qChZXnfm[i];
            else
                cout << qChZXnfm[i] << ",";
            i++;
        };
    }
    return 0;
}

