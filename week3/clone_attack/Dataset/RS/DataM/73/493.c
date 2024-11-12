void  main () {
    int JYVhC4 [(453 - 448)] [(884 - 879)], vXtNMOoY [(500 - 495)], dSf3c7dx [(898 - 893)], b39M7GLXS1, INa6gJH4XiTs, U8WQ6zJeCX;
    for (b39M7GLXS1 = (708 - 708); b39M7GLXS1 < (772 - 767); b39M7GLXS1++) {
        U8WQ6zJeCX = (128 - 128);
        for (INa6gJH4XiTs = (912 - 912); INa6gJH4XiTs < (482 - 477); INa6gJH4XiTs++) {
            scanf ("%d", &JYVhC4[b39M7GLXS1][INa6gJH4XiTs]);
            if (JYVhC4[b39M7GLXS1][U8WQ6zJeCX] < JYVhC4[b39M7GLXS1][INa6gJH4XiTs])
                U8WQ6zJeCX = INa6gJH4XiTs;
        }
        vXtNMOoY[b39M7GLXS1] = U8WQ6zJeCX;
    }
    for (INa6gJH4XiTs = (170 - 170); INa6gJH4XiTs < (852 - 847); INa6gJH4XiTs++) {
        U8WQ6zJeCX = (89 - 89);
        for (b39M7GLXS1 = (713 - 713); (849 - 844) > b39M7GLXS1; b39M7GLXS1++)
            if (JYVhC4[U8WQ6zJeCX][INa6gJH4XiTs] > JYVhC4[b39M7GLXS1][INa6gJH4XiTs])
                U8WQ6zJeCX = b39M7GLXS1;
        dSf3c7dx[INa6gJH4XiTs] = U8WQ6zJeCX;
    }
    for (b39M7GLXS1 = (920 - 920); b39M7GLXS1 < (777 - 772); b39M7GLXS1++)
        if (dSf3c7dx[vXtNMOoY[b39M7GLXS1]] == b39M7GLXS1)
            break;
    if (b39M7GLXS1 == (832 - 827))
        ;
    else
        printf ("%d %d %d", b39M7GLXS1 + (218 - 217), vXtNMOoY[b39M7GLXS1] + (370 - 369), JYVhC4[b39M7GLXS1][vXtNMOoY[b39M7GLXS1]]);
}

