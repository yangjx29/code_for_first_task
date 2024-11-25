int main () {
    int vvZcWS = (705 - 705);
    int EhEZXIikeV, UdqPWiVu0, UP5l2O4, sum;
    int ZDMJFqfPz4b [(1669 - 668)];
    int GFi9IDXhlqg, ExP74J;
    cin >> EhEZXIikeV >> UdqPWiVu0;
    for (UP5l2O4 = (990 - 989); UP5l2O4 <= EhEZXIikeV; UP5l2O4++) {
        cin >> ZDMJFqfPz4b[UP5l2O4];
    }
    for (GFi9IDXhlqg = 1; GFi9IDXhlqg <= EhEZXIikeV; GFi9IDXhlqg++) {
        ExP74J = EhEZXIikeV;
        while (ExP74J > GFi9IDXhlqg) {
            sum = ZDMJFqfPz4b[GFi9IDXhlqg] + ZDMJFqfPz4b[ExP74J];
            if (sum == UdqPWiVu0) {
                vvZcWS = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            ExP74J--;
        };
    }
    if (vvZcWS == 0)
        cout << "no";
    else
        cout << "yes";
    return 0;
}

