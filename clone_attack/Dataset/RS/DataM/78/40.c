int main () {
    int z, q, s, AIJCgxnY;
    for (z = 10; 50 >= z; z += 10) {
        q = 10;
        while (50 >= q) {
            if (!(z != q))
                continue;
            {
                s = 10;
                while (50 >= s) {
                    if (!(q != s) || !(z != s))
                        continue;
                    {
                        AIJCgxnY = 10;
                        while (AIJCgxnY <= 50) {
                            if (AIJCgxnY == s || AIJCgxnY == q || AIJCgxnY == z)
                                continue;
                            if (z + q == s + AIJCgxnY &&z + AIJCgxnY > s + q && z + s < q) {
                                cout << "l" << " " << AIJCgxnY << endl;
                                cout << "q" << " " << q << endl;
                                cout << "z" << " " << z << endl;
                                cout << "s" << " " << s << endl;
                            }
                            AIJCgxnY += 10;
                        };
                    }
                    s += 10;
                };
            }
            q += 10;
        };
    }
    return 0;
}

