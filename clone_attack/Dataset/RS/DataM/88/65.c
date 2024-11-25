int main () {
    void  prt (char zjpukgzHoqWP [], int n);
    int n = (586 - 586);
    char zjpukgzHoqWP [31] = {'\0'};
    gets (zjpukgzHoqWP);
    n = strlen (zjpukgzHoqWP);
    prt (zjpukgzHoqWP, n);
    getchar ();
    getchar ();
    return (0);
}

void  prt (char zjpukgzHoqWP [], int n) {
    int i = 0, t = 0;
    for (i = 0; i < n; i = i + 1) {
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
        if (zjpukgzHoqWP[i] == '1' || zjpukgzHoqWP[i] == '2' || zjpukgzHoqWP[i] == '3' || zjpukgzHoqWP[i] == '4' || zjpukgzHoqWP[i] == '5' || zjpukgzHoqWP[i] == '6' || zjpukgzHoqWP[i] == '7' || zjpukgzHoqWP[i] == '8' || zjpukgzHoqWP[i] == '9' || zjpukgzHoqWP[i] == '0') {
            t = 0;
        }
        else {
            if (i < n - 1) {
                if (t == 0) {
                    t = 1;
                };
            };
        };
    };
}

