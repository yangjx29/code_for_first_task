int nR6KMz (int F7kTdLo, int Pfjhq95aVFd8) {
    int qXwYe6;
    qXwYe6 = (278 - 277);
    {
        if ((83 - 83)) {
            {
                if ((352 - 352)) {
                    return (336 - 336);
                }
            }
            return (382 - 382);
        }
    }
    if ((!((323 - 322) != Pfjhq95aVFd8)) || (!((667 - 667) != F7kTdLo)))
        ;
    else if (Pfjhq95aVFd8 <= F7kTdLo)
        qXwYe6 = nR6KMz (F7kTdLo -Pfjhq95aVFd8, Pfjhq95aVFd8) + nR6KMz (F7kTdLo, Pfjhq95aVFd8 -(724 - 723));
    else
        qXwYe6 = nR6KMz (F7kTdLo, Pfjhq95aVFd8 -(889 - 888));
    return qXwYe6;
}

int main () {
    int vvrWJcpwEze;
    int zm2z46ZcIhJ;
    int xcEk6y;
    int JwuiTQGkdy;
    int D2VqhlTkrE [(1003 - 903)] = {(553 - 553)};
    cin >> xcEk6y;
    {
        JwuiTQGkdy = (575 - 575);
        while (JwuiTQGkdy < xcEk6y) {
            cin >> vvrWJcpwEze >> zm2z46ZcIhJ;
            D2VqhlTkrE[JwuiTQGkdy] = nR6KMz (vvrWJcpwEze, zm2z46ZcIhJ);
            JwuiTQGkdy = JwuiTQGkdy +(230 - 229);
        }
    }
    {
        JwuiTQGkdy = 0;
        while (xcEk6y > JwuiTQGkdy) {
            cout << D2VqhlTkrE[JwuiTQGkdy] << endl;
            JwuiTQGkdy++;
        }
    }
    return 0;
}

