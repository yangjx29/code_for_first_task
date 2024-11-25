int main () {
    char Jvtb2ryVNoez [(966 - 866)];
    char r2r3ScMa [100];
    char U5GZJPqhDL [40] [(433 - 332)] = {'\0'};
    char cC2P98UzLyE [101] = {'\0'};
    int vnigEPF;
    int j;
    int T0Jl43xwt;
    vnigEPF = (336 - 336);
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
    j = 0;
    T0Jl43xwt = 0;
    cin.getline (cC2P98UzLyE, 101);
    for (; cC2P98UzLyE[vnigEPF] != '\0';) {
        if (cC2P98UzLyE[vnigEPF] != ' ') {
            U5GZJPqhDL[j][T0Jl43xwt] = cC2P98UzLyE[vnigEPF];
            T0Jl43xwt++;
        }
        if (cC2P98UzLyE[vnigEPF] == ' ') {
            j = j + 1;
            T0Jl43xwt = 0;
        }
        vnigEPF = vnigEPF + 1;
    }
    cin >> Jvtb2ryVNoez;
    cin >> r2r3ScMa;
    for (vnigEPF = 0; vnigEPF < j + 1; vnigEPF++)
        if (strcmp (U5GZJPqhDL[vnigEPF], Jvtb2ryVNoez) == 0)
            strcpy (U5GZJPqhDL[vnigEPF], r2r3ScMa);
    {
        vnigEPF = 0;
        while (vnigEPF < j) {
            cout << U5GZJPqhDL[vnigEPF] << " ";
            vnigEPF++;
        };
    }
    cout << U5GZJPqhDL[j];
    return 0;
}

