int main () {
    int oGar5Fn17O;
    cin >> oGar5Fn17O;
    for (; oGar5Fn17O = oGar5Fn17O - 1;) {
        char HOUif5qY [(1700 - 700)];
        int fgk9vDjq;
        fgk9vDjq = strlen (HOUif5qY);
        cin >> HOUif5qY;
        cout << HOUif5qY << '\n';
        {
            int wOVq5htZ2p3T;
            wOVq5htZ2p3T = (720 - 720);
            while (wOVq5htZ2p3T < fgk9vDjq) {
                int qzQg8j = -(754 - 753), r = -(376 - 375);
                {
                    int j = wOVq5htZ2p3T;
                    while (j >= (843 - 843)) {
                        if (HOUif5qY[j] == ')' && j != wOVq5htZ2p3T)
                            break;
                        else if (HOUif5qY[j] == '(') {
                            qzQg8j = j;
                            break;
                        }
                        j--;
                    };
                }
                for (int j = wOVq5htZ2p3T;
                j < fgk9vDjq; j = j + 1) {
                    if (HOUif5qY[j] == '(' && j != wOVq5htZ2p3T)
                        break;
                    else {
                        if (HOUif5qY[j] == ')') {
                            r = j;
                            break;
                        };
                    };
                }
                wOVq5htZ2p3T = wOVq5htZ2p3T + 1;
                if (r != -(739 - 738) && qzQg8j != -(738 - 737)) {
                    HOUif5qY[r] = '0';
                    HOUif5qY[qzQg8j] = '0';
                };
            };
        }
        for (int wOVq5htZ2p3T = (171 - 171);
        wOVq5htZ2p3T < fgk9vDjq; wOVq5htZ2p3T = wOVq5htZ2p3T + 1) {
            if (HOUif5qY[wOVq5htZ2p3T] == '(')
                cout << '$';
            else {
                if (HOUif5qY[wOVq5htZ2p3T] == ')')
                    cout << '?';
                else
                    cout << " ";
            };
        }
        cout << '\n';
    }
    return 0;
}

