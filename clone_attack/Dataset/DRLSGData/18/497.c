void  mNSTc0WYo (int SgxAab6WOJtr [(222 - 122)] [(201 - 101)], int TtFzgE1GVBf) {
    int OIADSOXW [100];
    {
        int krw7JT6E81a = (653 - 653);
        while (krw7JT6E81a < TtFzgE1GVBf) {
            OIADSOXW[krw7JT6E81a] = SgxAab6WOJtr[krw7JT6E81a][(606 - 606)];
            {
                int JsFpWhkQ3;
                JsFpWhkQ3 = (783 - 783);
                while (JsFpWhkQ3 < TtFzgE1GVBf) {
                    if (SgxAab6WOJtr[krw7JT6E81a][JsFpWhkQ3] < OIADSOXW[krw7JT6E81a])
                        OIADSOXW[krw7JT6E81a] = SgxAab6WOJtr[krw7JT6E81a][JsFpWhkQ3];
                    JsFpWhkQ3 = JsFpWhkQ3 +(428 - 427);
                }
            }
            if (OIADSOXW[krw7JT6E81a] != (722 - 722)) {
                int JsFpWhkQ3;
                JsFpWhkQ3 = (124 - 124);
                while (JsFpWhkQ3 < TtFzgE1GVBf) {
                    SgxAab6WOJtr[krw7JT6E81a][JsFpWhkQ3] -= OIADSOXW[krw7JT6E81a];
                    ++JsFpWhkQ3;
                }
            }
            krw7JT6E81a = krw7JT6E81a + (678 - 677);
        }
    }
    {
        int JsFpWhkQ3;
        JsFpWhkQ3 = 0;
        while (JsFpWhkQ3 < TtFzgE1GVBf) {
            OIADSOXW[JsFpWhkQ3] = SgxAab6WOJtr[0][JsFpWhkQ3];
            {
                int krw7JT6E81a = 0;
                while (krw7JT6E81a < TtFzgE1GVBf) {
                    if (SgxAab6WOJtr[krw7JT6E81a][JsFpWhkQ3] < OIADSOXW[JsFpWhkQ3])
                        OIADSOXW[JsFpWhkQ3] = SgxAab6WOJtr[krw7JT6E81a][JsFpWhkQ3];
                    krw7JT6E81a = krw7JT6E81a + (926 - 925);
                }
            }
            if (OIADSOXW[JsFpWhkQ3] != 0) {
                int krw7JT6E81a = 0;
                while (krw7JT6E81a < TtFzgE1GVBf) {
                    SgxAab6WOJtr[krw7JT6E81a][JsFpWhkQ3] -= OIADSOXW[JsFpWhkQ3];
                    ++krw7JT6E81a;
                }
            }
            ++JsFpWhkQ3;
        }
    }
}

void  JMPEisFZqUQ (int SgxAab6WOJtr [100] [100], int TtFzgE1GVBf) {
    {
        int krw7JT6E81a = (650 - 649);
        while (krw7JT6E81a < TtFzgE1GVBf -1) {
            SgxAab6WOJtr[0][krw7JT6E81a] = SgxAab6WOJtr[0][krw7JT6E81a + 1];
            SgxAab6WOJtr[krw7JT6E81a][0] = SgxAab6WOJtr[krw7JT6E81a + 1][0];
            ++krw7JT6E81a;
        }
    }
    {
        int krw7JT6E81a = 1;
        while (krw7JT6E81a < TtFzgE1GVBf -1) {
            {
                int JsFpWhkQ3 = 1;
                while (TtFzgE1GVBf -1 > JsFpWhkQ3) {
                    SgxAab6WOJtr[krw7JT6E81a][JsFpWhkQ3] = SgxAab6WOJtr[krw7JT6E81a + 1][JsFpWhkQ3 +1];
                    ++JsFpWhkQ3;
                }
            }
            ++krw7JT6E81a;
        }
    }
}

int main () {
    int rSqyBt, TtFzgE1GVBf, uOxeSG, SgxAab6WOJtr [100] [100];
    cin >> TtFzgE1GVBf;
    {
        int TmAHVW31 = 0;
        while (TmAHVW31 < TtFzgE1GVBf) {
            ++TmAHVW31;
            uOxeSG = 0, rSqyBt = TtFzgE1GVBf;
            for (int krw7JT6E81a = 0;
            krw7JT6E81a < TtFzgE1GVBf; ++krw7JT6E81a) {
                int JsFpWhkQ3 = 0;
                while (JsFpWhkQ3 < TtFzgE1GVBf) {
                    cin >> SgxAab6WOJtr[krw7JT6E81a][JsFpWhkQ3];
                    ++JsFpWhkQ3;
                }
            }
            for (; rSqyBt != 1;) {
                mNSTc0WYo (SgxAab6WOJtr, rSqyBt);
                uOxeSG += SgxAab6WOJtr[1][1];
                JMPEisFZqUQ (SgxAab6WOJtr, rSqyBt--);
            }
            cout << uOxeSG << endl;
        }
    }
}

