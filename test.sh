make 

echo "### Q1 Test ###"
echo "nornal case:"
./TMA1Question1 ./Q1Test/GoodFile1.txt ./Q1Test/GoodFile2.txt
echo "Bad case 1:"
./TMA1Question1 ./Q1Test/GoodFile1.txt ./Q1Test/nonexist.txt
echo "Bad case 2:"
./TMA1Question1 ./Q1Test/nonexist.txt ./Q1Test/GoodFile1.txt
echo "Bad case 3:"
./TMA1Question1 ./Q1Test/nonexist.txt ./Q1Test/ZeroLength.txt
echo "Bad case 4:"
./TMA1Question1
echo "Bad case 5:"
./TMA1Question1 ./Q1Test/nonEnglishScript.txt
echo "Bad case 6:" 
./TMA1Question1 ./Q1Test/SpaceOnly.txt

echo
echo
echo

echo "### Q2 Test ###"
echo "nornal case:"
./TMA1Question2 ./Q1Test/GoodFile1.txt ./Q1Test/GoodFile2.txt
echo "Bad case 1:"
./TMA1Question2 ./Q1Test/GoodFile1.txt ./Q1Test/nonexist.txt
echo "Bad case 2:"
./TMA1Question2 ./Q1Test/nonexist.txt ./Q1Test/GoodFile1.txt
echo "Bad case 3:"
./TMA1Question2 ./Q1Test/nonexist.txt ./Q1Test/ZeroLength.txt
echo "Bad case 4:"
./TMA1Question2
echo "Bad case 5:"
./TMA1Question2 ./Q1Test/nonEnglishScript.txt
echo "Bad case 6:" 
./TMA1Question2 ./Q1Test/SpaceOnly.txt

make clean
