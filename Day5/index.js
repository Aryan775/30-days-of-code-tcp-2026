const cells = document.querySelectorAll('.cell');
const statu = document.getElementById('status');
const rbtn = document.getElementById('restart');
let board = Array(9).fill('');
let currentPlayer = 'X';
let gameActive = true;

const winningCombinations = [
  [0,1,2],[3,4,5],[6,7,8],
  [0,3,6],[1,4,7],[2,5,8],
  [0,4,8],[2,4,6]
];

statu.textContent = "Player X's turn";

cells.forEach(cell => cell.addEventListener('click', Click));
rbtn.addEventListener('click', restartGame);

function Click(e) {
  const index = e.target.dataset.index;

  if (!gameActive || board[index]) return;

  board[index] = currentPlayer;
  e.target.textContent = currentPlayer;
  e.target.classList.add(currentPlayer.toLowerCase());

  if (checkWin()) {
    statu.textContent = `Player ${currentPlayer} Wins!`;
    statu.className = 'status win';
    gameActive = false;
  } else if (board.every(cell => cell !== '')) {
    statu.textContent = "It's a Draw!";
    statu.className = 'status draw';
    gameActive = false;
  } else {
    currentPlayer = currentPlayer === 'X' ? 'O' : 'X';
    statu.textContent = `Player ${currentPlayer}'s turn`;
  }
}

function checkWin() {
  return winningCombinations.some(combo =>
    combo.every(index => board[index] === currentPlayer)
  );
}

function restartGame() {
  board.fill('');
  currentPlayer = 'X';
  gameActive = true;
  statu.textContent = "Player X's turn";
  statu.className = 'status';

  cells.forEach(cell => {
    cell.textContent = '';
    cell.classList.remove('x', 'o');
  });
}
