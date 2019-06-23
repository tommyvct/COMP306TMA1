make 

echo "### Q1 Test ###"
echo "nornal case:"
./bin/TMA1Question1 ./TMA1Test/GoodFile1.txt ./TMA1Test/GoodFile2.txt
echo "Bad case 1:"
./bin/TMA1Question1 ./TMA1Test/GoodFile1.txt ./TMA1Test/nonexist.txt
echo "Bad case 2:"
./bin/TMA1Question1 ./TMA1Test/nonexist.txt ./TMA1Test/GoodFile1.txt
echo "Bad case 3:"
./bin/TMA1Question1 ./TMA1Test/nonexist.txt ./TMA1Test/ZeroLength.txt
echo "Bad case 4:"
./bin/TMA1Question1
echo "Bad case 5:"
./bin/TMA1Question1 ./TMA1Test/nonEnglishScript.txt
echo "Bad case 6:" 
./bin/TMA1Question1 ./TMA1Test/SpaceOnly.txt

echo
echo
echo

echo "### Q2 Test ###"
echo "nornal case:"
./bin/TMA1Question2 ./TMA1Test/GoodFile1.txt ./TMA1Test/GoodFile2.txt
echo "Bad case 1:"
./bin/TMA1Question2 ./TMA1Test/GoodFile1.txt ./TMA1Test/nonexist.txt
echo "Bad case 2:"
./bin/TMA1Question2 ./TMA1Test/nonexist.txt ./TMA1Test/GoodFile1.txt
echo "Bad case 3:"
./bin/TMA1Question2 ./TMA1Test/nonexist.txt ./TMA1Test/ZeroLength.txt
echo "Bad case 4:"
./bin/TMA1Question2
echo "Bad case 5:"
./bin/TMA1Question2 ./TMA1Test/nonEnglishScript.txt
echo "Bad case 6:" 
./bin/TMA1Question2 ./TMA1Test/SpaceOnly.txt

echo
echo
echo

echo "### Q3 Test ###"
./bin/TMA1Question3 

echo
echo
echo

echo "### Q4 Test ###"
echo "normal case 1:"
./bin/TMA1Question4
echo "normal case 2:"
./bin/TMA1Question4 123456
echo "bad case 1:"
./bin/TMA1Question4 fsdkkfjhsdfh
echo "bad case 2:"
./bin/TMA1Question4 -6666

echo
echo
echo

echo "### Q5 Test ###"
echo "normal case:"
./bin/TMA1Question5 ./TMA1Test/GoodFile1.txt ./TMA1Test/GoodFile2.txt
echo "Bad case 1:"
./bin/TMA1Question5 ./TMA1Test/GoodFile1.txt ./TMA1Test/nonexist.txt
echo "Bad case 2:"
./bin/TMA1Question5 ./TMA1Test/nonexist.txt ./TMA1Test/GoodFile1.txt
echo "Bad case 3:"
./bin/TMA1Question5 ./TMA1Test/SpaceOnly.txt ./TMA1Test/ZeroLength.txt
echo "Bad case 4:"
./bin/TMA1Question5
echo "Bad case 5:"
./bin/TMA1Question5 ./TMA1Test/NonEnglishScript.txt
echo "Bad case 6:" 
./bin/TMA1Question5 ./TMA1Test/SpaceOnly.txt


make clean