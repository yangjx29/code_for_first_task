int main () {
    int l, i, flag = 0;
    char DkCeBqn2r [200];
    cin.getline (DkCeBqn2r, 200);
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
    l = strlen (DkCeBqn2r);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (l > i) {
            if (!(0 != flag)) {
                cout << DkCeBqn2r[i];
                if (DkCeBqn2r[i] == ' ')
                    flag = 1;
            }
            else if (DkCeBqn2r[i] != ' ') {
                i--;
                flag = 0;
            }
            i++;
        };
    }
    cout << endl;
}

