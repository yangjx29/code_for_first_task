int main () {
    int sum;
    int gwD6hy;
    int x4GR5hWOUD;
    int i;
    int QP37wz;
    int KWvUSC9YaPsF [1000];
    int b [1000] = {0};
    sum = 0;
    cin >> x4GR5hWOUD >> gwD6hy;
    for (i = 0; x4GR5hWOUD > i; i++) {
        cin >> KWvUSC9YaPsF[i];
    }
    {
        i = 0;
        while (i < x4GR5hWOUD) {
            {
                QP37wz = i + 1;
                while (x4GR5hWOUD > QP37wz) {
                    if (!(gwD6hy != KWvUSC9YaPsF[i] + KWvUSC9YaPsF[QP37wz])) {
                        b[i] = 1;
                        break;
                    }
                    QP37wz++;
                };
            }
            i++;
        };
    }
    cin.get ();
    {
        i = 0;
        while (i < x4GR5hWOUD) {
            sum = sum + b[i];
            i++;
        };
    }
    if (sum == 0)
        cout << "no";
    else
        cout << "yes";
    return 0;
}

