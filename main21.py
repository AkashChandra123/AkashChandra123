{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 1,
   "id": "98f47904",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "original NP1[1 2 3 4 5 6 7]\n",
      "original NP2[1 2 3 4 5 6 7]\n",
      "changed NP1[41  2  3  4  5  6  7]\n",
      "original NP2[41  2  3  4  5  6  7]\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "np1 = np.array([1,2,3,4,5,6,7])\n",
    "np2 = np1.view()\n",
    "print(f'original NP1{np1}')\n",
    "print(f'original NP2{np2}')\n",
    "np1[0] = 41\n",
    "print(f'changed NP1{np1}')\n",
    "print(f'original NP2{np2}')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 2,
   "id": "5733fd28",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "original NP1[0 1 2 3 4 5 6 7 8]\n",
      "original NP2[0 1 2 3 4 5 6 7 8]\n",
      "changed NP1[41  1  2  3  4  5  6  7  8]\n",
      "original NP2[0 1 2 3 4 5 6 7 8]\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "np1 = np.array([0,1,2,3,4,5,6,7,8])\n",
    "np2 = np1.copy()\n",
    "print(f'original NP1{np1}')\n",
    "print(f'original NP2{np2}')\n",
    "np1[0] = 41\n",
    "print(f'changed NP1{np1}')\n",
    "print(f'original NP2{np2}')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "id": "5420c582",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "original NP1[0 1 2 3 4 5 6 7 8]\n",
      "original NP2[0 1 2 3 4 5 6 7 8]\n",
      "changed NP1[0 1 2 3 4 5 6 7 8]\n",
      "original NP2[41  1  2  3  4  5  6  7  8]\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "np1 = np.array([0,1,2,3,4,5,6,7,8])\n",
    "np2 = np1.copy()\n",
    "print(f'original NP1{np1}')\n",
    "print(f'original NP2{np2}')\n",
    "np2[0] = 41\n",
    "print(f'changed NP1{np1}')\n",
    "print(f'original NP2{np2}')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 8,
   "id": "0f70fab5",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "1\n",
      "2\n",
      "3\n",
      "4\n",
      "5\n",
      "6\n",
      "7\n",
      "8\n",
      "9\n",
      "10\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "a = np.array([1,2,3,4,5,6,7,8,9,10])\n",
    "for i in a:\n",
    "    print(i)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 10,
   "id": "0243fdf1",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[1 2 3 4 5]\n",
      "[ 6  7  8  9 10]\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "a = np.array([[1,2,3,4,5],[6,7,8,9,10],[11,12,13,14]])\n",
    "for x in a:\n",
    "    print(x)\n",
    "    #for y in x:\n",
    "        #print(y)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 11,
   "id": "d36c1a01",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[1, 2, 3, 4], [5, 6, 7, 8, 9], [10, 11, 12]]\n"
     ]
    }
   ],
   "source": [
    "lst = [[1,2,3,4],[5,6,7,8,9],[10,11,12]]\n",
    "print(lst)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 14,
   "id": "3b2c817b",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "1\n",
      "2\n",
      "3\n",
      "4\n",
      "5\n",
      "6\n",
      "7\n",
      "8\n",
      "9\n",
      "10\n",
      "11\n",
      "12\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "a = np.array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])\n",
    "for x in a:\n",
    "    for y in x:\n",
    "        for z in y:\n",
    "            print(z)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 17,
   "id": "bed89fa5",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[1 2 3]\n",
      " [4 5 6]\n",
      " [5 7 9]]\n",
      "[[ 7  8  9]\n",
      " [10 11 12]\n",
      " [ 8  2  5]]\n",
      "[[ 51  36  48]\n",
      " [126  99 126]\n",
      " [177 135 174]]\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "a = np.array([[1,2,3],[4,5,6],[5,7,9]])\n",
    "print(a)\n",
    "b = np.array([[7,8,9],[10,11,12],[8,2,5]])\n",
    "print(b)\n",
    "print(a@b)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 18,
   "id": "55b0ad45",
   "metadata": {},
   "outputs": [
    {
     "ename": "SyntaxError",
     "evalue": "invalid syntax (4265182736.py, line 5)",
     "output_type": "error",
     "traceback": [
      "\u001b[1;36m  Cell \u001b[1;32mIn[18], line 5\u001b[1;36m\u001b[0m\n\u001b[1;33m    <class 'numpy.ndarray'>\u001b[0m\n\u001b[1;37m    ^\u001b[0m\n\u001b[1;31mSyntaxError\u001b[0m\u001b[1;31m:\u001b[0m invalid syntax\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "x = np.array([[1, 2, 3], [4, 5, 6]], np.int32)\n",
    "\n",
    "type(x)\n",
    "<class 'numpy.ndarray'>\n",
    "\n",
    "x.shape\n",
    "(2, 3)\n",
    "\n",
    "x.dtype\n",
    "dtype('int32')"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 20,
   "id": "7f7a3e80",
   "metadata": {},
   "outputs": [
    {
     "ename": "IndentationError",
     "evalue": "unexpected indent (2115945351.py, line 16)",
     "output_type": "error",
     "traceback": [
      "\u001b[1;36m  Cell \u001b[1;32mIn[20], line 16\u001b[1;36m\u001b[0m\n\u001b[1;33m    [36, 39, 42],\u001b[0m\n\u001b[1;37m    ^\u001b[0m\n\u001b[1;31mIndentationError\u001b[0m\u001b[1;31m:\u001b[0m unexpected indent\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "x = np.arange(27).reshape((3,3,3))\n",
    "\n",
    "x([[[ 0,  1,  2],\n",
    "    [ 3,  4,  5],\n",
    "    [ 6,  7,  8]],\n",
    "    [[ 9, 10, 11],\n",
    "    [12, 13, 14],\n",
    "    [15, 16, 17]],\n",
    "    [[18, 19, 20],\n",
    "    [21, 22, 23],\n",
    "    [24, 25, 26]]])\n",
    "\n",
    "x.sum(axis=0)\n",
    "#array([[27, 30, 33],\n",
    "       [36, 39, 42],\n",
    "       [45, 48, 51]])\n",
    "\n",
    "# for sum, axis is the first keyword, so we may omit it,\n",
    "\n",
    "# specifying only its value\n",
    "\n",
    "x.sum(0), x.sum(1), x.sum(2)\n",
    "(array([[27, 30, 33],\n",
    "        [36, 39, 42],\n",
    "        [45, 48, 51]]),\n",
    " array([[ 9, 12, 15],\n",
    "        [36, 39, 42],\n",
    "        [63, 66, 69]]),\n",
    " array([[ 3, 12, 21],\n",
    "        [30, 39, 48],\n",
    "        [57, 66, 75]]))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 21,
   "id": "ee298895",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[[ 0  1  2]\n",
      "  [ 3  4  5]\n",
      "  [ 6  7  8]]\n",
      "\n",
      " [[ 9 10 11]\n",
      "  [12 13 14]\n",
      "  [15 16 17]]\n",
      "\n",
      " [[18 19 20]\n",
      "  [21 22 23]\n",
      "  [24 25 26]]]\n"
     ]
    }
   ],
   "source": [
    "import numpy as np\n",
    "x = np.arange(27).reshape(3,3,3)\n",
    "print(x)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 22,
   "id": "3b7d7b7f",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[27 30 33]\n",
      " [36 39 42]\n",
      " [45 48 51]]\n"
     ]
    }
   ],
   "source": [
    "print(x.sum(axis=0))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 23,
   "id": "9e5dab25",
   "metadata": {},
   "outputs": [
    {
     "name": "stdout",
     "output_type": "stream",
     "text": [
      "[[ 9 12 15]\n",
      " [36 39 42]\n",
      " [63 66 69]]\n",
      "[[ 3 12 21]\n",
      " [30 39 48]\n",
      " [57 66 75]]\n"
     ]
    }
   ],
   "source": [
    "print(x.sum(axis=1))\n",
    "print(x.sum(axis=2))"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "id": "027da8df",
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3 (ipykernel)",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.11.0"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 5
}
