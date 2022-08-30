echo "compilando..."
g++ -std=c++11 main.cpp sortingAlgorithms.cpp -Wall -o exe
echo "deletando pasta test"
rm -r test
echo "criando pasta test..."
mkdir test
echo "executando..."
echo "---------------  MERGE SORT --------------"
echo "executando n = 10"
./exe 10 1 > ./test/mergeSortN10.txt

echo "executando n = 100"
./exe 100 1 > ./test/mergeSortN100.txt

echo "executando n = 1000"
./exe 1000 1 > ./test/mergeSortN1000.txt

echo "executando n = 10000"
./exe 10000 1 > ./test/mergeSortN10000.txt

echo "executando n = 100000"
./exe 100000 1 > ./test/mergeSortN100000.txt

echo "executando n = 1000000"
./exe 1000000 1 > ./test/mergeSortN1000000.txt

echo "executando n = 10000000"
./exe 10000000 1 > ./test/mergeSortN10000000.txt

echo "executando n = 100000000"
./exe 100000000 1 > ./test/mergeSortN100000000.txt

echo "--------------- SELECTION SORT ----------------"

echo "executando n = 10"
./exe 10 2 > ./test/selectionSortN10.txt

echo "executando n = 100"
./exe 100 2 > ./test/selectionSortN100.txt

echo "executando n = 1000"
./exe 1000 2 > ./test/selectionSortN1000.txt

echo "executando n = 10000"
./exe 10000 2 > ./test/selectionSortN10000.txt

echo "executando n = 100000"
./exe 100000 2 > ./test/selectionSortN100000.txt

echo "executando n = 1000000"
./exe 1000000 2 > ./test/selectionSortN1000000.txt

echo "executando n = 10000000"
./exe 10000000 2 > ./test/selectionSortN10000000.txt

echo "executando n = 100000000"
./exe 100000000 2 > ./test/selectionSortN100000000.txt

echo "------------------ RADIX SORT -----------------"

echo "executando n = 10"
./exe 10 3 > ./test/radixSortN10.txt

echo "executando n = 100"
./exe 100 3 > ./test/radixSortN100.txt

echo "executando n = 1000"
./exe 1000 3 > ./test/radixSortN1000.txt

echo "executando n = 10000"
./exe 10000 3 > ./test/radixSortN10000.txt

echo "executando n = 100000"
./exe 100000 3 > ./test/radixSortN100000.txt

echo "executando n = 1000000"
./exe 1000000 3 > ./test/radixSortN1000000.txt

echo "executando n = 10000000"
./exe 10000000 3 > ./test/radixSortN10000000.txt

echo "executando n = 100000000"
./exe 100000000 3 > ./test/radixSortN100000000.txt

sleep 10000000