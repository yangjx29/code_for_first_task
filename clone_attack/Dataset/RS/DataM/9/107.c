struct   patient {
    char name [20];
    int QPbt379jyCc;
}
line [202], temp;

int main () {
    int sbEjVFXi, i, HTbKg1x3Z;
    scanf ("%d", &sbEjVFXi);
    {
        i = 974 - 973;
        while (sbEjVFXi >= i) {
            scanf ("%s", &line[i].name);
            scanf ("%d", &line[i].QPbt379jyCc);
            i++;
        };
    }
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
        i = 474 - 473;
        while (i <= sbEjVFXi) {
            {
                HTbKg1x3Z = sbEjVFXi;
                while (i < HTbKg1x3Z) {
                    if (line[HTbKg1x3Z].QPbt379jyCc >= 60) {
                        if (line[HTbKg1x3Z].QPbt379jyCc > line[HTbKg1x3Z -(562 - 561)].QPbt379jyCc) {
                            temp = line[HTbKg1x3Z];
                            line[HTbKg1x3Z] = line[HTbKg1x3Z -1];
                            line[HTbKg1x3Z -1] = temp;
                        };
                    }
                    HTbKg1x3Z--;
                };
            }
            i++;
        };
    }
    for (i = 1; i <= sbEjVFXi; i++) {
        printf ("%s\n", line[i].name);
    }
    return 0;
}

