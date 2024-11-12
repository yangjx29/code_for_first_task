int main () {
    char Kp5vOzTaSU [1000] [1000], KaKudGSfA7 [1000] [1000];
    int IpyJOotnkAuh;
    int K5JMg2pGhFz;
    int y94uYN1;
    IpyJOotnkAuh = 0;
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
    K5JMg2pGhFz = 0;
    cin >> y94uYN1;
    cin.ignore ();
    for (IpyJOotnkAuh = 0; IpyJOotnkAuh < y94uYN1; IpyJOotnkAuh = IpyJOotnkAuh +1)
        cin >> Kp5vOzTaSU[IpyJOotnkAuh];
    for (IpyJOotnkAuh = 0; IpyJOotnkAuh < y94uYN1; IpyJOotnkAuh = IpyJOotnkAuh +1) {
        {
            K5JMg2pGhFz = 0;
            while (Kp5vOzTaSU[IpyJOotnkAuh][K5JMg2pGhFz] != '\0') {
                if (Kp5vOzTaSU[IpyJOotnkAuh][K5JMg2pGhFz] == 'A')
                    KaKudGSfA7[IpyJOotnkAuh][K5JMg2pGhFz] = 'T';
                else {
                    if (Kp5vOzTaSU[IpyJOotnkAuh][K5JMg2pGhFz] == 'T')
                        KaKudGSfA7[IpyJOotnkAuh][K5JMg2pGhFz] = 'A';
                    else {
                        if (Kp5vOzTaSU[IpyJOotnkAuh][K5JMg2pGhFz] == 'G')
                            KaKudGSfA7[IpyJOotnkAuh][K5JMg2pGhFz] = 'C';
                        else {
                            if (Kp5vOzTaSU[IpyJOotnkAuh][K5JMg2pGhFz] == 'C')
                                KaKudGSfA7[IpyJOotnkAuh][K5JMg2pGhFz] = 'G';
                        };
                    };
                }
                K5JMg2pGhFz = K5JMg2pGhFz +1;
            };
        }
        KaKudGSfA7[IpyJOotnkAuh][K5JMg2pGhFz] = '\0';
        cout << KaKudGSfA7[IpyJOotnkAuh] << endl;
    }
    return 0;
}

