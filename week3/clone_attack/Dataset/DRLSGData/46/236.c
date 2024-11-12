int Xh6KSRW7btxJ [100] [100] = {0};

void  WJvRGZODd (int Vy6hq0, int Uv9hSYbkrtap) {
    int vhKoNMVU;
    int D82rOlb;
    if (Vy6hq0 == 0 || Uv9hSYbkrtap == 0)
        return;
    if (Vy6hq0 == 1) {
        {
            vhKoNMVU = 0;
            for (; vhKoNMVU < Uv9hSYbkrtap;) {
                cout << Xh6KSRW7btxJ[0][vhKoNMVU] << endl;
                vhKoNMVU++;
            }
        }
        return;
    }
    if (Uv9hSYbkrtap == 1) {
        {
            vhKoNMVU = 0;
            for (; vhKoNMVU < Vy6hq0;) {
                cout << Xh6KSRW7btxJ[vhKoNMVU][0] << endl;
                vhKoNMVU++;
            }
        }
        return;
    }
    {
        vhKoNMVU = 0;
        while (vhKoNMVU < Uv9hSYbkrtap) {
            cout << Xh6KSRW7btxJ[0][vhKoNMVU] << endl;
            vhKoNMVU++;
        }
    }
    {
        vhKoNMVU = 1;
        while (vhKoNMVU < Vy6hq0) {
            cout << Xh6KSRW7btxJ[vhKoNMVU][Uv9hSYbkrtap -1] << endl;
            vhKoNMVU++;
        }
    }
    {
        vhKoNMVU = Uv9hSYbkrtap -2;
        for (; vhKoNMVU >= 0;) {
            cout << Xh6KSRW7btxJ[Vy6hq0 -1][vhKoNMVU] << endl;
            vhKoNMVU--;
        }
    }
    {
        vhKoNMVU = Vy6hq0 -2;
        for (; vhKoNMVU > 0;) {
            cout << Xh6KSRW7btxJ[vhKoNMVU][0] << endl;
            vhKoNMVU--;
        }
    }
    {
        vhKoNMVU = 0;
        for (; vhKoNMVU < Vy6hq0 -2;) {
            {
                D82rOlb = 0;
                while (D82rOlb < Uv9hSYbkrtap -2) {
                    Xh6KSRW7btxJ[vhKoNMVU][D82rOlb] = Xh6KSRW7btxJ[vhKoNMVU + 1][D82rOlb +1];
                    D82rOlb++;
                }
            }
            vhKoNMVU++;
        }
    }
    WJvRGZODd (Vy6hq0 -2, Uv9hSYbkrtap -2);
}

int main () {
    int Vy6hq0;
    int Uv9hSYbkrtap;
    int vhKoNMVU;
    int D82rOlb;
    cin >> Vy6hq0 >> Uv9hSYbkrtap;
    {
        vhKoNMVU = 0;
        for (; vhKoNMVU < Vy6hq0;) {
            {
                D82rOlb = 0;
                for (; D82rOlb < Uv9hSYbkrtap;) {
                    cin >> Xh6KSRW7btxJ[vhKoNMVU][D82rOlb];
                    D82rOlb++;
                }
            }
            vhKoNMVU++;
        }
    }
    WJvRGZODd (Vy6hq0, Uv9hSYbkrtap);
    return 0;
}

