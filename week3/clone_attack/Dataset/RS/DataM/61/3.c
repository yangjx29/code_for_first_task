int j3051qm (int aPaZF5);

int main () {
    int aPaZF5;
    int H25AgkYBwotu;
    int xBcnpqe43UKr;
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
    scanf ("%d", &aPaZF5);
    for (H25AgkYBwotu = (839 - 839); aPaZF5 > H25AgkYBwotu; H25AgkYBwotu++) {
        scanf ("%d", &xBcnpqe43UKr);
        printf ("%d\n", j3051qm (xBcnpqe43UKr));
    }
    return 0;
}

int j3051qm (int aPaZF5) {
    int UsNuqHUwXYS;
    int WYE7ru [1000];
    int QStX9vqdcyb4;
    WYE7ru[0] = 1;
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
    WYE7ru[1] = 1;
    {
        UsNuqHUwXYS = 2;
        while (UsNuqHUwXYS <= aPaZF5) {
            WYE7ru[UsNuqHUwXYS] = WYE7ru[UsNuqHUwXYS -1] + WYE7ru[UsNuqHUwXYS -2];
            UsNuqHUwXYS++;
        };
    }
    QStX9vqdcyb4 = WYE7ru[aPaZF5 - 1];
    return QStX9vqdcyb4;
}

