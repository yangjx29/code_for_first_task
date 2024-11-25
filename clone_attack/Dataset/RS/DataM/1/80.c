int zg8qAU3z (int DoW7KNmjd, int Cz6Y3Icn8) {
    int k;
    int Kd2Skyt;
    int crX5VfIb;
    k = 0;
    if (!(1 != DoW7KNmjd))
        return 1;
    {
        Kd2Skyt = Cz6Y3Icn8;
        while (Kd2Skyt <= DoW7KNmjd) {
            if (DoW7KNmjd % Kd2Skyt == 0)
                k = k + zg8qAU3z (DoW7KNmjd / Kd2Skyt, Kd2Skyt);
            Kd2Skyt = Kd2Skyt +1;
        };
    }
    return k;
}

int main () {
    int DoW7KNmjd;
    int Kd2Skyt;
    scanf ("%d", &DoW7KNmjd);
    for (; DoW7KNmjd > 0; DoW7KNmjd = DoW7KNmjd -1) {
        scanf ("%d", &Kd2Skyt);
        printf ("%d", zg8qAU3z (Kd2Skyt, (533 - 531)));
        if (DoW7KNmjd -1)
            printf ("\n");
    };
}

