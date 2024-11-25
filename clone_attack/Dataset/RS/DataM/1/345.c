int gdORWbX;

int RtbPsh (int Jl9N3MG1umYb, int sxUzsvGKJZc7) {
    if (!(1 != sxUzsvGKJZc7)) {
        gdORWbX = gdORWbX + 1;
        return 1;
    }
    for (int jV7AjvT4eI = 2;
    sxUzsvGKJZc7 >= jV7AjvT4eI; jV7AjvT4eI = jV7AjvT4eI + 1)
        if (sxUzsvGKJZc7 % jV7AjvT4eI == 0 && jV7AjvT4eI >= Jl9N3MG1umYb)
            RtbPsh (jV7AjvT4eI, sxUzsvGKJZc7 / jV7AjvT4eI);
}

int main () {
    int jAMiH01;
    int vSdzMGpNRW;
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
    };
    cin >> jAMiH01;
    while (jAMiH01 > 0) {
        jAMiH01 = jAMiH01 - 1;
        gdORWbX = 0;
        cin >> vSdzMGpNRW;
        RtbPsh (1, vSdzMGpNRW);
        cout << gdORWbX << endl;
    };
}

