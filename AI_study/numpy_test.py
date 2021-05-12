import numpy as np

data = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

a = np.array(data)

print(a)
print(a.dtype) #데이터 타입을 보여줌  dir(a), type(a) 보다 자세히 안보여줌

#데이터 형변환
a = a.astype(np.float32)
print(a.dtype)

a = a.astype('int32')
print(a.dtype)

#데이터 접근
print(a[0][1])
print(a[0])

#데이터 생성
b = np.arange(1, 10, 2) #arange(start, stop, step)
print(b)

c = np.arange(1, 10).reshape(3, 3) # reshapeL(x, y) x * y == np.arange else error
print(c)

d = np.linspace(1, 10, 10) #linspace(start, stop, conut)
print(d)

#연산
print(a+a) #각원소 끼리 연산
print(a-a) #각원소 끼리 연산
print(a*a) #각원소 끼리 연산
print(a%a) #각원소 끼리 연산
print(a/a) #각원소 끼리 연산

print(np.dot(a, a)) #행렬의 곱
print(a@a) #행렬의 곱

#차원
e = np.array(1) #스칼라 0차원
print(e)
print(e.shape)
print(e.ndim) #차원 출력 함수

f = np.array([1, 2, 3, 4, 5]) #백터 1차원
print(f)
print(f.shape)
print(f.ndim) #차원 출력 함수

g = np.array([[1, 2, 3], [4, 5, 6]]) #매트릭스 2차원
print(g)
print(g.shape)
print(g.ndim) #차원 출력 함수

h = np.array([[[1, 2, 3], [4, 5, 6]]]) #텐서(Tensor) 3차원이상
print(h)
print(h.shape)
print(h.ndim) #차원 출력 함수

#행렬의 우형
i = np.arange(12).reshape(2, 3, 2)
print(i)

j = np.ones(12)
print(j)

k = np.eye(3) #단위행렬
print(k)

l = np.zeros(12)
print(l)

n = np.zeros([3, 4, 2])
print(n)

m = np.empty([2, 3])
print(m)

o = np.full((3, 4), 1000)
print(o)

p = np.linspace(2, 10, 6)
print(p)

#집계 함수
q = np.arange(10).reshape(2 ,5)
print(q)

print(np.mean(q)) #평균
print(np.median(q)) #중앙값
print(np.std(q)) #표준편차
print(np.var(q)) #분산

print(np.sum(q)) #합
print(np.sum(q, axis = 0)) #행기준 합
print(np.sum(q, axis = 1)) #열기준 합

print(np.max(q)) #최대
print(np.min(q)) #최소