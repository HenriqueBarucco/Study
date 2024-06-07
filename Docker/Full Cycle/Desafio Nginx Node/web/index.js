import express from 'express'
import Database from './src/database.js'
import Generator from 'doctor-who'

const app = express()
const PORT = 3000

app.get('/', (_req, res) => {
    generateName(res)
})

app.listen(PORT, () => {
  console.log(`Application started at: ${PORT}`)
})

const gen = new Generator()
const db = new Database()

async function generateName(res) {
  try {
    const name = gen.random()
    await db.insertName(name)
  } catch (error) {
    console.error(error.message)
    res.status(500).send('Error inserting name')
  }
  
  await showScreen(res)
}

async function showScreen(res) {
  try {
    const people = await db.getAll()

    const tableRows = people?.map((person) => `
        <tr>
          <td>${person.id}</td>
          <td>${person.name}</td>
        </tr>
      `).join('')
      
    const table = `
      <table>
        <tr>
          <th>#</th>
          <th>Name</th>
        </tr>${tableRows}
      </table>`

    res.send(`
      <h1>Full Cycle Rocks!</h1>
      ${table}
    `)
  } catch (error) {
    console.error(error.message)
    res.status(500).send('Error getting people')
  }
}