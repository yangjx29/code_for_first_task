int main () {
    int Nxiz491OhoM;
    int JVwt5XG;
    int iXGEZt [100] [100];
    int FEdz14Fy;
    FEdz14Fy = (516 - 516);
    cin >> Nxiz491OhoM;
    for (int zKLMvl = (72 - 72);
    zKLMvl < Nxiz491OhoM; zKLMvl = zKLMvl + 1) {
        for (int af5HK4r39byQ = (963 - 963);
        Nxiz491OhoM > af5HK4r39byQ; af5HK4r39byQ = af5HK4r39byQ + 1)
            for (int r6PfWGIvYFRC = (846 - 846);
            r6PfWGIvYFRC < Nxiz491OhoM; r6PfWGIvYFRC = r6PfWGIvYFRC + 1) {
                cin >> *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC);
            }
        for (int nTDni6qyW = Nxiz491OhoM;
        1 < nTDni6qyW; nTDni6qyW--) {
            FEdz14Fy = FEdz14Fy +*(*(iXGEZt + 1) + 1);
            for (int af5HK4r39byQ = 0;
            nTDni6qyW > af5HK4r39byQ; af5HK4r39byQ = af5HK4r39byQ + 1) {
                JVwt5XG = **(iXGEZt + af5HK4r39byQ);
                for (int r6PfWGIvYFRC = 1;
                nTDni6qyW > r6PfWGIvYFRC; r6PfWGIvYFRC = r6PfWGIvYFRC + 1) {
                    if (JVwt5XG > *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC)) {
                        JVwt5XG = *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC);
                    }
                }
                for (int r6PfWGIvYFRC = 0;
                nTDni6qyW > r6PfWGIvYFRC; r6PfWGIvYFRC = r6PfWGIvYFRC + 1)
                    *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC) = *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC) - JVwt5XG;
            }
            for (int r6PfWGIvYFRC = 0;
            r6PfWGIvYFRC < nTDni6qyW; r6PfWGIvYFRC = r6PfWGIvYFRC + 1) {
                JVwt5XG = *(*iXGEZt + r6PfWGIvYFRC);
                for (int af5HK4r39byQ = 1;
                af5HK4r39byQ < nTDni6qyW; af5HK4r39byQ = af5HK4r39byQ + 1) {
                    if (JVwt5XG > *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC)) {
                        JVwt5XG = *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC);
                    }
                }
                for (int af5HK4r39byQ = 0;
                af5HK4r39byQ < nTDni6qyW; af5HK4r39byQ = af5HK4r39byQ + 1)
                    *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC) = *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC) - JVwt5XG;
            }
            for (int af5HK4r39byQ = 1;
            af5HK4r39byQ < nTDni6qyW; af5HK4r39byQ = af5HK4r39byQ + 1)
                for (int r6PfWGIvYFRC = 0;
                r6PfWGIvYFRC < nTDni6qyW; r6PfWGIvYFRC = r6PfWGIvYFRC + 1) {
                    *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC) = *(*(iXGEZt + af5HK4r39byQ + 1) + r6PfWGIvYFRC);
                }
            for (int r6PfWGIvYFRC = 1;
            r6PfWGIvYFRC < nTDni6qyW; r6PfWGIvYFRC = r6PfWGIvYFRC + 1)
                for (int af5HK4r39byQ = 0;
                af5HK4r39byQ < nTDni6qyW; af5HK4r39byQ = af5HK4r39byQ + 1) {
                    *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC) = *(*(iXGEZt + af5HK4r39byQ) + r6PfWGIvYFRC + 1);
                }
        }
        cout << FEdz14Fy << endl;
        FEdz14Fy = 0;
    }
    return 0;
}

