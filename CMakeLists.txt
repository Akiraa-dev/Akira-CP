cmake_minimum_required(VERSION 3.26)
project(Akira_CP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Akira_CP
        "2D Arrays Practice Exercises/1.cpp"
        "2D Arrays Practice Exercises/10.cpp"
        "2D Arrays Practice Exercises/2.cpp"
        "2D Arrays Practice Exercises/3.cpp"
        "2D Arrays Practice Exercises/4.cpp"
        "2D Arrays Practice Exercises/5.cpp"
        "2D Arrays Practice Exercises/6.cpp"
        "2D Arrays Practice Exercises/8.cpp"
        "2D Arrays Practice Exercises/9.cpp"
        Backtracking/1.cpp
        BFS/Implement.cpp
        Codeforces/CFR1/A.cpp
        Codeforces/CFR1/B.cpp
        Codeforces/CFR1/C.cpp
        "Codeforces/CFR538 (Div. 2)/A.cpp"
        "Codeforces/CFR538 (Div. 2)/B.cpp"
        "Codeforces/CFR538 (Div. 2)/C.cpp"
        "Codeforces/CFR538 (Div. 2)/D.cpp"
        "Codeforces/CFR538 (Div. 2)/E.cpp"
        "Codeforces/CFR799 (Div. 4)/A.cpp"
        "Codeforces/CFR799 (Div. 4)/B.cpp"
        "Codeforces/CFR799 (Div. 4)/C.cpp"
        "Codeforces/CFR799 (Div. 4)/D.cpp"
        "Codeforces/CFR799 (Div. 4)/E.cpp"
        "Codeforces/CFR799 (Div. 4)/F.cpp"
        "Codeforces/CFR866 (Div .2)/B.cpp"
        "Codeforces/CFR888 (Div. 3)/A.cpp"
        "Codeforces/CFR888 (Div. 3)/B.cpp"
        "Codeforces/CFR888 (Div. 3)/B2.cpp"
        "Codeforces/ECFR 149 (Rated for Div .2)/A.cpp"
        "Codeforces/ECFR 152 (Rated for Div .2)/A.cpp"
        "Codeforces/ECFR 152 (Rated for Div .2)/B.cpp"
        "Contest PTIT/Contest 1/1.cpp"
        "Contest PTIT/Contest 1/10.cpp"
        "Contest PTIT/Contest 1/11.cpp"
        "Contest PTIT/Contest 1/12.cpp"
        "Contest PTIT/Contest 1/13.cpp"
        "Contest PTIT/Contest 1/2.cpp"
        "Contest PTIT/Contest 1/3.cpp"
        "Contest PTIT/Contest 1/4.cpp"
        "Contest PTIT/Contest 1/5.cpp"
        "Contest PTIT/Contest 1/6.cpp"
        "Contest PTIT/Contest 1/7.cpp"
        "Contest PTIT/Contest 1/8.cpp"
        "Contest PTIT/Contest 1/9.cpp"
        "Contest PTIT/Contest 3/1.cpp"
        "Contest PTIT/Contest 3/2.cpp"
        "Contest PTIT/Contest 3/3.cpp"
        "Contest PTIT/Contest 3/4.cpp"
        "Contest PTIT/Contest 3/5.cpp"
        "Contest PTIT/Contest 3/6.cpp"
        "Contest PTIT/Contest 3/7.cpp"
        DFS/Implement.cpp
        "Digit DP/SumOfAll.cpp"
        DP/HS2023/A.cpp
        DP/HS2023/B.cpp
        DP/HS2023/C.cpp
        DP/DPSTEPS.cpp
        DP/Frog1.cpp
        DP/SABO.cpp
        DP/XauDoiXungDaiNhat.cpp
        "Graph theory/Adjacency_list.cpp"
        "Graph theory/Adjacency_matrix.cpp"
        "Graph theory/Edge_list.cpp"
        "Graph theory/Matrix_to_list.cpp"
        Nothing/A1.cpp
        Nothing/A2.cpp
        Nothing/A3.cpp
        Nothing/A4.cpp
        Nothing/B1.cpp
        Nothing/B2.cpp
        Nothing/B3.cpp
        Nothing/B4.cpp
        Nothing/B5.cpp
        Nothing/B6.cpp
        Nothing/B66.cpp
        Nothing/BIGNUM.cpp
        Nothing/C9.cpp
        Nothing/C99.cpp
        Nothing/C999.cpp
        Nothing/C9999.cpp
        "Number theory/001/1.cpp"
        "Number theory/001/2.cpp"
        "Number theory/001/3.cpp"
        "Number theory/001/4.cpp"
        "Number theory/002/1.cpp"
        "Number theory/002/2.cpp"
        "Number theory/002/3.cpp"
        "Number theory/002/4.cpp"
        "Number theory/002/5.cpp"
        "Number theory/002/6.cpp"
        "Online_Judge/Duyen hai va DBBB lan thu XIV/A.cpp"
        "Online_Judge/Duyen hai va DBBB lan thu XIV/C.cpp"
        Online_Judge/Gia_Dinh_OJ/chope_bangma.cpp
        Online_Judge/Gia_Dinh_OJ/chope_chia_het_3_ez.cpp
        Online_Judge/Gia_Dinh_OJ/chope_daynhiphan.cpp
        Online_Judge/Gia_Dinh_OJ/chope_sochan.cpp
        Online_Judge/Gia_Dinh_OJ/chope_vitrixuathien.cpp
        Online_Judge/Gia_Dinh_OJ/chope_vitrung.cpp
        Online_Judge/Gia_Dinh_OJ/hsg9_matma.cpp
        Online_Judge/Gia_Dinh_OJ/hsg9_tbc.cpp
        Online_Judge/Gia_Dinh_OJ/hsg9_xoso.cpp
        Online_Judge/Le_Hong_Phong_OJ/aplusb.cpp
        Online_Judge/Le_Hong_Phong_OJ/atimesb.cpp
        Online_Judge/Le_Hong_Phong_OJ/derank13_dmgcalc.cpp
        Online_Judge/Le_Hong_Phong_OJ/ts2023_daovang.cpp
        Online_Judge/Le_Hong_Phong_OJ/ts2023_giaohang.cpp
        Online_Judge/Le_Hong_Phong_OJ/ts2023_luythua.cpp
        Online_Judge/Le_Hong_Phong_OJ/ts2_rapphim.cpp
        "Online_Judge/Le_Quy_Don_OJ/TS10 LQD DA NANG/SOANHEM.cpp"
        Online_Judge/Le_Quy_Don_OJ/18THTBDNA1.cpp
        Online_Judge/Le_Quy_Don_OJ/1920SODEP.cpp
        Online_Judge/Le_Quy_Don_OJ/19THTBDNA1.cpp
        Online_Judge/Le_Quy_Don_OJ/20THTBDNA1.cpp
        Online_Judge/Le_Quy_Don_OJ/22STRA1.cpp
        Online_Judge/Le_Quy_Don_OJ/22THTBDNA1.cpp
        Online_Judge/Le_Quy_Don_OJ/AADDB.cpp
        Online_Judge/Le_Quy_Don_OJ/AMISUM.cpp
        Online_Judge/Le_Quy_Don_OJ/APLUSB.cpp
        Online_Judge/Le_Quy_Don_OJ/ARR01.cpp
        Online_Judge/Le_Quy_Don_OJ/ARR02.cpp
        Online_Judge/Le_Quy_Don_OJ/ASCII.cpp
        Online_Judge/Le_Quy_Don_OJ/AV01.cpp
        Online_Judge/Le_Quy_Don_OJ/AV02.cpp
        Online_Judge/Le_Quy_Don_OJ/AV03.cpp
        Online_Judge/Le_Quy_Don_OJ/AV04.cpp
        Online_Judge/Le_Quy_Don_OJ/AV05.cpp
        Online_Judge/Le_Quy_Don_OJ/AV06.cpp
        Online_Judge/Le_Quy_Don_OJ/AVERAGE.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC01.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC02.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC03.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC04.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC05.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC06.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC07.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC08.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC09.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC10.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC11.cpp
        Online_Judge/Le_Quy_Don_OJ/BASIC12.cpp
        Online_Judge/Le_Quy_Don_OJ/BNHAN.cpp
        Online_Judge/Le_Quy_Don_OJ/BONUOC.cpp
        Online_Judge/Le_Quy_Don_OJ/BOOK.cpp
        Online_Judge/Le_Quy_Don_OJ/CB01.cpp
        Online_Judge/Le_Quy_Don_OJ/CB03.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P10.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P11.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P13.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P14.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P2.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P3.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P4.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P5.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P7.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL1P9.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P11.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P2.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P3.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P4.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P5.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P6.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P7.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P8.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL2P9.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL3P1.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL3P2.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL3P3.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL3P5.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL4P1.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL4P12.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL4P2.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL4P3.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL4P8.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL4P9.cpp
        Online_Judge/Le_Quy_Don_OJ/CDL5P3.cpp
        Online_Judge/Le_Quy_Don_OJ/CNT00.cpp
        Online_Judge/Le_Quy_Don_OJ/CNT01.cpp
        Online_Judge/Le_Quy_Don_OJ/CNT02.cpp
        Online_Judge/Le_Quy_Don_OJ/CNTCHAR.cpp
        Online_Judge/Le_Quy_Don_OJ/CNTNUM.cpp
        Online_Judge/Le_Quy_Don_OJ/CNTPAIR01.cpp
        Online_Judge/Le_Quy_Don_OJ/COMSTR.cpp
        Online_Judge/Le_Quy_Don_OJ/CSLN.cpp
        Online_Judge/Le_Quy_Don_OJ/CSP.cpp
        Online_Judge/Le_Quy_Don_OJ/DIST.cpp
        Online_Judge/Le_Quy_Don_OJ/DIV2AORANGEVOL2.cpp
        Online_Judge/Le_Quy_Don_OJ/DIVISOR.cpp
        Online_Judge/Le_Quy_Don_OJ/EASYSUM.cpp
        Online_Judge/Le_Quy_Don_OJ/ENCODESTR.cpp
        Online_Judge/Le_Quy_Don_OJ/FIBO00.cpp
        Online_Judge/Le_Quy_Don_OJ/FINDPAIR.cpp
        Online_Judge/Le_Quy_Don_OJ/FIRSTN.cpp
        Online_Judge/Le_Quy_Don_OJ/FOR01.cpp
        Online_Judge/Le_Quy_Don_OJ/FOR02.cpp
        Online_Judge/Le_Quy_Don_OJ/FOR03.cpp
        Online_Judge/Le_Quy_Don_OJ/FOR04.cpp
        Online_Judge/Le_Quy_Don_OJ/FOR05.cpp
        Online_Judge/Le_Quy_Don_OJ/GIAITHUA.cpp
        Online_Judge/Le_Quy_Don_OJ/GOLDBACH.cpp
        Online_Judge/Le_Quy_Don_OJ/HOANHAO.cpp
        Online_Judge/Le_Quy_Don_OJ/IF01.cpp
        Online_Judge/Le_Quy_Don_OJ/IF02.cpp
        Online_Judge/Le_Quy_Don_OJ/IF03.cpp
        Online_Judge/Le_Quy_Don_OJ/IF04.cpp
        Online_Judge/Le_Quy_Don_OJ/IF05.cpp
        Online_Judge/Le_Quy_Don_OJ/IF06.cpp
        Online_Judge/Le_Quy_Don_OJ/IFFORWHILE01.cpp
        Online_Judge/Le_Quy_Don_OJ/IFFORWHILE05.cpp
        Online_Judge/Le_Quy_Don_OJ/IFFORWHILE06.cpp
        Online_Judge/Le_Quy_Don_OJ/KH01.cpp
        Online_Judge/Le_Quy_Don_OJ/KHONGCAN.cpp
        Online_Judge/Le_Quy_Don_OJ/KTPRIME.cpp
        Online_Judge/Le_Quy_Don_OJ/LIQ.cpp
        Online_Judge/Le_Quy_Don_OJ/MATH11.cpp
        Online_Judge/Le_Quy_Don_OJ/MATH12.cpp
        Online_Judge/Le_Quy_Don_OJ/MATH13.cpp
        Online_Judge/Le_Quy_Don_OJ/MATH14.cpp
        Online_Judge/Le_Quy_Don_OJ/MATH15.cpp
        Online_Judge/Le_Quy_Don_OJ/MINICT10.cpp
        Online_Judge/Le_Quy_Don_OJ/MULTWO.cpp
        Online_Judge/Le_Quy_Don_OJ/NAMNHUAN.cpp
        Online_Judge/Le_Quy_Don_OJ/PALINSTR.cpp
        Online_Judge/Le_Quy_Don_OJ/PALINSTR01.cpp
        Online_Judge/Le_Quy_Don_OJ/POSZERO.cpp
        Online_Judge/Le_Quy_Don_OJ/PRIMES.cpp
        Online_Judge/Le_Quy_Don_OJ/PRIMESNUM.cpp
        Online_Judge/Le_Quy_Don_OJ/PY02.cpp
        Online_Judge/Le_Quy_Don_OJ/PY03.cpp
        Online_Judge/Le_Quy_Don_OJ/PY04.cpp
        Online_Judge/Le_Quy_Don_OJ/PY05.cpp
        Online_Judge/Le_Quy_Don_OJ/PY06.cpp
        Online_Judge/Le_Quy_Don_OJ/SDN.cpp
        Online_Judge/Le_Quy_Don_OJ/SOCKS.cpp
        Online_Judge/Le_Quy_Don_OJ/SORTCB00.cpp
        Online_Judge/Le_Quy_Don_OJ/SORTCB01.cpp
        Online_Judge/Le_Quy_Don_OJ/SORTCB02.cpp
        Online_Judge/Le_Quy_Don_OJ/SORTCB03.cpp
        Online_Judge/Le_Quy_Don_OJ/SORTCB04.cpp
        Online_Judge/Le_Quy_Don_OJ/SORTCB05.cpp
        Online_Judge/Le_Quy_Don_OJ/STONEFROG1.cpp
        Online_Judge/Le_Quy_Don_OJ/STR01.cpp
        Online_Judge/Le_Quy_Don_OJ/STR02.cpp
        Online_Judge/Le_Quy_Don_OJ/STR03.cpp
        Online_Judge/Le_Quy_Don_OJ/STR04.cpp
        Online_Judge/Le_Quy_Don_OJ/STR05.cpp
        Online_Judge/Le_Quy_Don_OJ/SUMK.cpp
        Online_Judge/Le_Quy_Don_OJ/SUMSEQ.cpp
        Online_Judge/Le_Quy_Don_OJ/SWAPNUM.cpp
        Online_Judge/Le_Quy_Don_OJ/SWCGAUNUOC.cpp
        Online_Judge/Le_Quy_Don_OJ/TINHTONG1.cpp
        Online_Judge/Le_Quy_Don_OJ/UCBC.cpp
        Online_Judge/Le_Quy_Don_OJ/W01.cpp
        Online_Judge/Le_Quy_Don_OJ/W02.cpp
        Online_Judge/Le_Quy_Don_OJ/W03.cpp
        Online_Judge/Le_Quy_Don_OJ/W04.cpp
        Online_Judge/Le_Quy_Don_OJ/W05.cpp
        Online_Judge/Le_Quy_Don_OJ/W06.cpp
        Online_Judge/Le_Quy_Don_OJ/W07.cpp
        Online_Judge/Le_Quy_Don_OJ/XAUDX.cpp
        Online_Judge/TS10_2023-2024/PTNK/A.cpp
        Online_Judge/TS10_2023-2024/PTNK/B.cpp
        Online_Judge/TS10_2023-2024/PTNK/C.cpp
        "Online_Judge/TS10_2023-2024/Quang Ninh/coor.cpp"
        "Online_Judge/TS10_2023-2024/Quang Ninh/divi.cpp"
        "Online_Judge/TS10_2023-2024/Quang Ninh/gues.cpp"
        "Online_Judge/TS10_2023-2024/Quang Ninh/pass.cpp"
        Online_Judge/TS10_2023-2024/TPHCM/daovang.cpp
        Online_Judge/TS10_2023-2024/TPHCM/giaohang.cpp
        Online_Judge/TS10_2023-2024/TPHCM/luythua.cpp
        Online_Judge/VNOI/atcoder_dp_a.cpp
        Online_Judge/VNOI/liq.cpp
        Online_Judge/VNOI/post.cpp
        "PTIT/Contest 1/9.cpp"
        "Set and Map/1.cpp"
        "Set and Map/10.cpp"
        "Set and Map/2.cpp"
        "Set and Map/3.cpp"
        "Set and Map/4.cpp"
        "Set and Map/5.cpp"
        "Set and Map/6.cpp"
        "Set and Map/7.cpp"
        "Set and Map/8.cpp"
        "Set and Map/9.cpp"
        "Sliding Window/A.cpp"
        Test/a.cpp
        Test/DEMSOCHINHPHUONG.cpp
        Test/DKT.cpp
        Test/GIAOLUU.cpp
        Test/LATSACH.cpp
        Test/LUUNIEM.cpp
        Test/Prime.cpp
        Test/sol.cpp
        Test/TBS.cpp
        "Training (Beginner)/A.cpp"
        "Training (Beginner)/B.cpp"
        "Training (Beginner)/C.cpp"
        "Training (Beginner)/D.cpp"
        "Training (Beginner)/E.cpp"
        "Training (Beginner)/F.cpp"
        "Training (Beginner)/G.cpp"
        "Two Pointers/A.cpp"
        "Two Pointers/B.cpp"
        "Two Pointers/C.cpp"
        "Two Pointers/D.cpp"
        "Two Pointers/E.cpp"
        "Two Pointers/F.cpp"
        VDCODER/AbangE.cpp
        VDCODER/BANHANG.cpp
        VDCODER/BRUDAYDB.cpp
        VDCODER/BRUDAYSO.cpp
        VDCODER/BRUFIBO.cpp
        VDCODER/BRUXAUCON.cpp
        VDCODER/CTC93.cpp
        VDCODER/CTC94.cpp
        VDCODER/CTC95.cpp
        VDCODER/CTC96.cpp
        VDCODER/CTC97.cpp
        VDCODER/DPLCS1.cpp
        VDCODER/DSLOP.cpp
        VDCODER/FINDAB.cpp
        VDCODER/kilucdiem.cpp
        VDCODER/LOP.cpp
        VDCODER/MATRAN.cpp
        VDCODER/SOCHAN.cpp
        VDCODER/SUMFIVE.cpp
        VDCODER/TEPSO.cpp
        VDCODER/TIMKHOA.cpp
        VDCODER/UOC.cpp
        VNOI/LongestPalindrome.cpp
        VNOI/nksgame.cpp
        VNOI/Palind.cpp
        VNOI/power.cpp
        /SumOfAll.cpp
        /SumOfAll.cpp
        "Digit DP/SumOfAll.cpp"
        "Digit DP/SumOfAll.cpp"
        "Contest PTIT/Contest 1/1.cpp")
