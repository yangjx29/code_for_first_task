int main () {
    int LiOSMRY2AE;
    int xJvs6ut7kNw;
    int ojncCUT6Ab;
    int lAqCw8T;
    cin >> LiOSMRY2AE >> xJvs6ut7kNw;
    int RRHVua90D7oC [LiOSMRY2AE] [xJvs6ut7kNw];
    {
        int SG5uTKP3t = (686 - 686);
        while (LiOSMRY2AE > SG5uTKP3t) {
            for (int jM3C9de = (772 - 772);
            xJvs6ut7kNw > jM3C9de; jM3C9de = jM3C9de + 1)
                cin >> RRHVua90D7oC[SG5uTKP3t][jM3C9de];
            SG5uTKP3t = SG5uTKP3t +1;
        };
    }
    cin >> ojncCUT6Ab >> lAqCw8T;
    int KkFZcrxSRhO [ojncCUT6Ab] [lAqCw8T];
    int rugcEC3M [LiOSMRY2AE] [lAqCw8T];
    {
        int SG5uTKP3t = (289 - 289);
        while (ojncCUT6Ab > SG5uTKP3t) {
            {
                int jM3C9de = (769 - 769);
                while (lAqCw8T > jM3C9de) {
                    cin >> KkFZcrxSRhO[SG5uTKP3t][jM3C9de];
                    jM3C9de = jM3C9de + 1;
                };
            }
            SG5uTKP3t++;
        };
    }
    {
        int SG5uTKP3t = (908 - 908);
        while (SG5uTKP3t < LiOSMRY2AE) {
            for (int jM3C9de = (680 - 680);
            lAqCw8T > jM3C9de; jM3C9de = jM3C9de + 1) {
                rugcEC3M[SG5uTKP3t][jM3C9de] = (248 - 248);
                {
                    int GD7qYSTL8eAF = 0;
                    while (xJvs6ut7kNw > GD7qYSTL8eAF) {
                        rugcEC3M[SG5uTKP3t][jM3C9de] += RRHVua90D7oC[SG5uTKP3t][GD7qYSTL8eAF] * KkFZcrxSRhO[GD7qYSTL8eAF][jM3C9de];
                        GD7qYSTL8eAF = GD7qYSTL8eAF +1;
                    };
                }
                if (jM3C9de == 0)
                    cout << rugcEC3M[SG5uTKP3t][jM3C9de];
                else
                    cout << ' ' << rugcEC3M[SG5uTKP3t][jM3C9de];
            }
            cout << endl;
            SG5uTKP3t++;
        };
    }
    return 0;
}

