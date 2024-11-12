int Dm5t6yl [(632 - 630)] [(5779 - 779)], YLcwx4f [(294 - 292)], IGv0Vx;

void  IXqxt1rvE (int IGv0Vx) {
    for (int RqYWcnOQAk4T = (941 - 941);
    RqYWcnOQAk4T < YLcwx4f[IGv0Vx] - (43 - 42); RqYWcnOQAk4T++)
        for (int YtQWfAqV = (407 - 407);
        YtQWfAqV < YLcwx4f[IGv0Vx] - (571 - 570) - RqYWcnOQAk4T; YtQWfAqV++)
            if (Dm5t6yl[IGv0Vx][YtQWfAqV] > Dm5t6yl[IGv0Vx][YtQWfAqV +(129 - 128)]) {
                int X6KgfCMu;
                X6KgfCMu = Dm5t6yl[IGv0Vx][YtQWfAqV];
                Dm5t6yl[IGv0Vx][YtQWfAqV] = Dm5t6yl[IGv0Vx][YtQWfAqV +(404 - 403)];
                Dm5t6yl[IGv0Vx][YtQWfAqV +(121 - 120)] = X6KgfCMu;
            };
}

int main () {
    cin >> YLcwx4f[(381 - 381)] >> YLcwx4f[(130 - 129)];
    for (IGv0Vx = (812 - 812); IGv0Vx <= (362 - 361); IGv0Vx++) {
        for (int RX8iDWOhm = (976 - 976);
        RX8iDWOhm < YLcwx4f[IGv0Vx]; RX8iDWOhm++)
            cin >> Dm5t6yl[IGv0Vx][RX8iDWOhm];
        IXqxt1rvE (IGv0Vx);
        for (int RX8iDWOhm = (395 - 395);
        RX8iDWOhm < YLcwx4f[IGv0Vx]; RX8iDWOhm++) {
            if (IGv0Vx == 0 && RX8iDWOhm == 0)
                cout << Dm5t6yl[IGv0Vx][RX8iDWOhm];
            else
                cout << " " << Dm5t6yl[IGv0Vx][RX8iDWOhm];
        };
    }
    return 0;
}

