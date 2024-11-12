int Vc1SusF (char YnrIg6eAu7v4 [501]) {
    int i;
    for (i = 0; strlen (YnrIg6eAu7v4) > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (YnrIg6eAu7v4[i] != YnrIg6eAu7v4[strlen (YnrIg6eAu7v4) - 1 - i]) {
            return 0;
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
            break;
        };
    }
    if (i >= strlen (YnrIg6eAu7v4))
        return 1;
}

int main () {
    char YnrIg6eAu7v4 [501], vWJEGg [501];
    int i, Oz0bn3rH4, IGaXZMUC;
    cin.getline (YnrIg6eAu7v4, 501);
    for (IGaXZMUC = 2; IGaXZMUC <= strlen (YnrIg6eAu7v4); IGaXZMUC = IGaXZMUC +1) {
        for (i = 0; i + IGaXZMUC -1 < strlen (YnrIg6eAu7v4); i = i + 1) {
            for (Oz0bn3rH4 = 0; Oz0bn3rH4 < IGaXZMUC; Oz0bn3rH4++) {
                vWJEGg[Oz0bn3rH4] = YnrIg6eAu7v4[i + Oz0bn3rH4];
                vWJEGg[IGaXZMUC] = '\0';
            }
            if (Vc1SusF (vWJEGg) == 1)
                cout << vWJEGg << endl;
        };
    }
    return 0;
}

