int main () {
    int DNuyc340R;
    char rApM4mdZgRj [102] [102];
    int krk7og8;
    int Dqxsb6;
    int D8Ikpaf3QP;
    int dqm6J4kj;
    krk7og8 = 0;
    cin >> Dqxsb6;
    {
        D8Ikpaf3QP = 1;
        while (Dqxsb6 >= D8Ikpaf3QP) {
            {
                dqm6J4kj = 1;
                while (dqm6J4kj <= Dqxsb6) {
                    cin >> rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj];
                    dqm6J4kj = dqm6J4kj + 1;
                }
            }
            D8Ikpaf3QP = D8Ikpaf3QP +1;
        }
    }
    {
        D8Ikpaf3QP = 0;
        while (Dqxsb6 +1 >= D8Ikpaf3QP) {
            rApM4mdZgRj[D8Ikpaf3QP][Dqxsb6 +1] = '#';
            rApM4mdZgRj[D8Ikpaf3QP][0] = '#';
            rApM4mdZgRj[0][D8Ikpaf3QP] = '#';
            rApM4mdZgRj[Dqxsb6 +1][D8Ikpaf3QP] = '#';
            D8Ikpaf3QP = D8Ikpaf3QP +1;
        }
    }
    cin >> DNuyc340R;
    do {
        DNuyc340R = DNuyc340R -1;
        {
            D8Ikpaf3QP = 1;
            while (Dqxsb6 >= D8Ikpaf3QP) {
                dqm6J4kj = 1;
                for (; dqm6J4kj <= Dqxsb6;) {
                    if (!('@' != rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj])) {
                        if (!('.' != rApM4mdZgRj[D8Ikpaf3QP -1][dqm6J4kj]))
                            rApM4mdZgRj[D8Ikpaf3QP -1][dqm6J4kj] = '!';
                        if (!('.' != rApM4mdZgRj[D8Ikpaf3QP +1][dqm6J4kj]))
                            rApM4mdZgRj[D8Ikpaf3QP +1][dqm6J4kj] = '!';
                        if (!('.' != rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj - 1]))
                            rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj - 1] = '!';
                        if (!('.' != rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj + 1]))
                            rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj + 1] = '!';
                    }
                    dqm6J4kj = dqm6J4kj + 1;
                }
                D8Ikpaf3QP = D8Ikpaf3QP +1;
            }
        }
        for (D8Ikpaf3QP = 1; D8Ikpaf3QP <= Dqxsb6; D8Ikpaf3QP = D8Ikpaf3QP +1) {
            dqm6J4kj = 1;
            while (Dqxsb6 >= dqm6J4kj) {
                if (rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj] == '!')
                    rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj] = '@';
                dqm6J4kj = dqm6J4kj + 1;
            }
        }
    }
    while (DNuyc340R > 1);
    {
        D8Ikpaf3QP = 1;
        while (D8Ikpaf3QP <= Dqxsb6) {
            dqm6J4kj = 1;
            for (; dqm6J4kj <= Dqxsb6;) {
                if (rApM4mdZgRj[D8Ikpaf3QP][dqm6J4kj] == '@')
                    krk7og8 = krk7og8 + 1;
                dqm6J4kj = dqm6J4kj + 1;
            }
            D8Ikpaf3QP = D8Ikpaf3QP +1;
        }
    }
    cout << krk7og8 << endl;
    return 0;
}

