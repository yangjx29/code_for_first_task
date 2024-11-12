int main () {
    char q2oAD1aZNtTS [100], B1IULpyk [100] [100];
    int defI5R = (910 - 910), zkPerBiH = (486 - 486), inqcsxz7G9 = 0;
    cin.getline (q2oAD1aZNtTS, 101, '\n');
    while (!(0 == q2oAD1aZNtTS[defI5R])) {
        if (q2oAD1aZNtTS[defI5R] != ' ') {
            B1IULpyk[zkPerBiH][inqcsxz7G9] = q2oAD1aZNtTS[defI5R];
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
            inqcsxz7G9++;
        }
        else {
            B1IULpyk[zkPerBiH][inqcsxz7G9] = 0;
            inqcsxz7G9 = 0;
            zkPerBiH++;
        }
        defI5R = defI5R + 1;
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
    for (defI5R = zkPerBiH; defI5R > 0; defI5R = defI5R - 1)
        cout << B1IULpyk[defI5R] << " ";
    cout << B1IULpyk[0];
    return 0;
}

