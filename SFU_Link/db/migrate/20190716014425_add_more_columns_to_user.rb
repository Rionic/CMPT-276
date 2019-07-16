class AddMoreColumnsToUser < ActiveRecord::Migration[5.2]
  def change
    add_column :users, :description, :text
    add_column :users, :faculty, :integer
  end
end
